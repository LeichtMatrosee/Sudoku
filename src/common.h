#ifndef common_h
#define common_h

/**
 * @brief COORD hat irgendwie versagt, also habe existiert hier ein neuer Struct
 * 
 */
typedef struct coordinates {
    int X;
    int Y;
} Coordinates;

/**
 * @brief Fasst die Koordinaten des Spiels in einem einzigen Struct zusammen.
 * 
 */
typedef struct layout {
    Coordinates topLeftCorner;
    Coordinates bottomRightCorner;
} GameLayout;

/**
 * @brief Constructor für das GameLayout Ovjekt
 * 
 * @param startX X-Koordinate oben links
 * @param startY Y-Koordinate oben links
 * @param width Breite des Spielfensters
 * @param height Höhe des Spielfensters
 * @return GameLayout das initialisierte Objekt.
 */
GameLayout newGameLayout(int startX, int startY, int width, int height);

/**
 * @brief Setzt den Cursor an Position X,Y
 * 
 * @param x X-Koordinate
 * @param y Y-Koordinate
 * @return int 0
 */
void setCursor(int x, int y);

/**
 * @brief Setzt den Cursor an Position X,Y
 * 
 * @param posX X-Koordinate
 * @param posY Y-Koordinate
 * @param format Das Format was geprintet wird (bspw. %i)
 * @return int 0
 */
void printfToPosition(int posX, int posY, char* format,...);

/**
 * @brief Generiert einen String der c n-mal enthält
 * 
 * @param c
 * @param n
 * @return char*
 */
char* repeatNTimes(char c, int n);

/**
 * @brief Leert das angegebene Rechteck.
 * 
 * @param y Obere Y-Koordinate des Rechtecks
 * @param height Höhe des Rechtecks
 * @param x linke X-Koordinate des Rechtecks
 * @param width Breite des Rechtecks
 * @return int 0
 */
int clearScreen(int y, int height, int x, int width);

/**
 * @brief Setzt die Farbe des Bildschrims. FUNKTION VON CWICHMANN!
 * 
 * @param color Identifier für die Farbe
 */
void setColor(char color);

/**
 * @brief Sagt dem Spieler, dass er / sie bitte auf Vollbild schalten soll.
 * 
 * @return int 1, falls angenommen wurde, 0 sonst.
 */
int askForFullscreen();

/**
 * @brief Setzt den Rahmen für das Spiel
 * 
 * @param layout GameLayout Objekt. Die Dimensionen des Spielfensters.
 * @return int 0
 */
int outlineFrame(GameLayout layout);

/**
 * @brief Zeigt die Fußzeile des Spielfensters an.
 * 
 * @param layout GameLayout Objekt. Die Dimensionen des Spielfensters.
 * @return int 0
 */
void showFooter(GameLayout layout);

/**
 * @brief Zeigt die Kopfzeile des Spielfensters an.
 * 
 * @param layout GameLayout Objekt. Die Dimensionen des Spielfensters.
 * @return int 0
 */
void showHeader(GameLayout layout);

/**
 * @brief Wrapper, um das Spielfenster zu initialisieren. Prompt für Vollbildmodus, Fenster umranden, Header und Fußzeile anzeigen.
 * 
 * @param layout GameLayout Objekt. Die Dimensionen des Spielfensters.
 * @return int 1, falls der initiale Prompt angenommen wurde, 0 falls abgebrochen.
 */
int initializeFrame(GameLayout layout);
#endif