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
 * @file stats.c 
 * @brief Implementation of statistics related function in C 
 *
 * This file contains the definitions of all statistical functions 
 * declared in `stats.h`. The implemented functions are designed 
 * to operate on a dataset of type unsigned char. They include:
 * 
 * - print_statistics()
 * - print_array()
 * - find_mean()
 * - find_median()
 * - find_minimum()
 * - find_maximum()
 * - sort_array()
 * 
 * These functions help analyze the data by calculating central 
 * tendencies and organizing the dataset.
 *
 * @author Dhruv Shah
 * @date 24 July 2025
 *
 */



#include <stdio.h>
#include <stdbool.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  printf("\nGiven Array:\n");
  print_array(test,SIZE);

  unsigned char minValue = find_minimum(test,SIZE);
  unsigned char maxValue = find_maximum(test,SIZE);
  unsigned char mean = find_mean(test,SIZE);
  unsigned char median = find_median(test,SIZE);
  
  print_statistics(minValue,maxValue,mean,median);
  sort_array(test,SIZE);
  printf("-------Sorting Array in Descending order-----\n");
  print_array(test,SIZE);
}

void print_statistics(unsigned char min, unsigned char max, unsigned char mean, unsigned char median){
  printf("\nStatistics of the Dataset Include:\n\nMinimum Value in dataset: %d\nMaximum Value in dataset: %d\nMean Value of dataset: %d\nMedian Value of dataset: %d\n\n",min,max,mean,median);
}

void print_array(unsigned char *arr, unsigned int size){
  for(int i = 0; i < size; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}

unsigned char find_median(unsigned char *arr, unsigned int size){
  sort_array(arr,size);
  if(size % 2 == 0){
    float med = ((arr[((size - 2)/2)]) + (arr[(size/2)]))/2;
    return med;
  }
  else{
    return arr[((size - 1)/2)];
  }    
}

unsigned char find_mean(unsigned char *arr, unsigned int size){
  float sum = 0, avg;
  for(int i = 0; i < size; i++){
    sum += arr[i];
  }
  avg = sum/size;
  return (unsigned char)avg;
}

unsigned char find_maximum(unsigned char *arr, unsigned int size){
  unsigned char index = 0;
  for(int i = 1; i < size;i++){
    if(arr[i] > arr[index]){
      index = i;
    }
  }
  return arr[index];
}

unsigned char find_minimum(unsigned char *arr, unsigned int size){
  unsigned char index = 0;
  for(int i = 1; i < size;i++){
    if(arr[i] < arr[index]){
      index = i;
    }
  }
  return arr[index];
}

void sort_array(unsigned char *arr, unsigned int size){
  //Bubble Sort
  for(int i = (size - 1);i > 0;i--){
    bool didSwap = false;
    for(int j = 0; j < i; j++){
      if(arr[j + 1] > arr[j]){
        unsigned char temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
        didSwap = true;
      }
    }
    if(didSwap == false){
      break;
    }
  }
}