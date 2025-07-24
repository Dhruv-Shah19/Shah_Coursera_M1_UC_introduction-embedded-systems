/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief User defined header file for function prototypes
 *
 * This file contains the function declarations for statistical 
 * analysis on a dataset. These functions include calculating 
 * mean, median, minimum, maximum, and sorting the array. It 
 * also contains functions to print the array and the statistics.
 * 
 * All functions operate on an array of unsigned char values.
 * This header is meant to be included in the main program.
 * 
 *
 * @author Dhruv Shah
 * @date 24 July 2025
 *
 */
 #ifndef __STATS_H__
 #define __STATS_H__
 
 void print_statistics(unsigned char *arr, unsigned int size);
 /**
  * @brief Prints the statistics of an array
  *
  * This function prints the minimum, maximum, mean,
  * and median of the given data array.
  *
  * @param arr Pointer to the unsigned char array
  * @param size Number of elements in the array
  *
  * @return void
  */

 void print_array(unsigned char *arr, unsigned int size);
 /**
  * @brief Prints all elements of the array
  *
  * Given an array of data and its length, this function prints
  * the contents to the screen.
  *
  * @param arr Pointer to the unsigned char array
  * @param size Number of elements in the array
  *
  * @return void
  */

 unsigned char find_median(unsigned char *arr, unsigned int size);
 /**
  * @brief Finds the median value in the array
  *
  * This function sorts the data and returns the median.
  * For even-sized arrays, it returns the average of the middle values.
  *
  * @param arr Pointer to the unsigned char array
  * @param size Number of elements in the array
  *
  * @return The median value as an unsigned char
  */

 unsigned char find_mean(unsigned char *arr, unsigned int size);
 /**
  * @brief Calculates the mean of the array
  *
  * Computes the average value of the array and returns it.
  *
  * @param arr Pointer to the unsigned char array
  * @param size Number of elements in the array
  *
  * @return The mean value as an unsigned char
  */

 unsigned char find_maximum(unsigned char *arr, unsigned int size);
 /**
  * @brief Finds the maximum value in the array
  *
  * Iterates through the array and returns the largest value.
  *
  * @param arr Pointer to the unsigned char array
  * @param size Number of elements in the array
  *
  * @return The maximum value as an unsigned char
  */

 unsigned char find_minimum(unsigned char *arr, unsigned int size);
 /**
  * @brief Finds the minimum value in the array
  *
  * Iterates through the array and returns the smallest value.
  *
  * @param arr Pointer to the unsigned char array
  * @param size Number of elements in the array
  *
  * @return The minimum value as an unsigned char
  */

 void sort_array(unsigned char *arr, unsigned int size);
 /**
  * @brief Sorts the array in descending order
  *
  * Given an array and its length, this function sorts the array
  * from largest to smallest. After sorting, the first element (index 0)
  * will be the largest, and the last (index size-1) will be the smallest.
  *
  * @param arr Pointer to the unsigned char array
  * @param size Number of elements in the array
  *
  * @return void
  */

 #endif /* __STATS_H__ */
 