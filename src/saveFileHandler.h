/**
 * @file saveFileHandler.h
 * @author Jannik Glane
 * @brief 
 * @version 0.1
 * @date 2022-06-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef saveFileHandler_h
#define saveFileHandler_h
#include "fileHelper.h"

/**
 * @brief Saves passed struct into a file.
 * 
 * @param save SaveFile-struct of the data to be saved
 * @param fileName
 * @return int 1 if successfull, 0 if an error occured
 */
int saveToFile(SaveFile save, char *fileName);

/**
 * @brief Loads the file and returns a SaveFile struct with the data.
 * 
 * @param fileName
 * @return SaveFile, NULL if file couldn't be loaded
 */
SaveFile loadSaveFromFile(char *fileName);
#endif