#ifndef solvingAlgorithm_h
#define solvingAlgorithm_h
int checkInsertionValid(int field[9][9], int num, int posY, int posX);
int generateSolution(int field[9][9], int solution[9][9], int numberOfSolutionsAskedFor);
// void printSudoku(int field[9][9]);
typedef enum {EASY, MEDIUM, HARD} difficulty;
void generateSudoku(int field[9][9], difficulty diff);
void generateHint(int field[9][9], int solution[9][9], int* hintsUsed);
int compareSudokuToSolution(int generatedSudoku[9][9], int sudokuSolution[9][9]);
#endif