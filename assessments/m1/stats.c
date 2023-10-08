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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */





#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
unsigned int *prova[40]={};

int * print_statistics(int *array, int length_array);
void print_array(int *array, int length_array);
int find_median(int *array, int length_array);
int find_mean(int *array, int length_array);
int find_maximum(int *array, int length_array);
int find_minimum(int *array, int length_array);
unsigned int * sort_array(unsigned int  *array, int length_array);


void main() {

unsigned int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                            114, 88,   45,  76, 123,  87,  25,  23,
                            200, 122, 150, 90,   92,  87, 177, 244,
                            201,   6,  12,  60,   8,   2,   5,  67,
                              7,  87, 250, 230,  99,   3, 100,  90};
int s;

*prova = sort_array(test,40);
printf("%p",prova[3]);



  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */
int find_mean(int *ptr, int length_array) //function definition
{ 
  int sum;
  int counter;
  for (counter = 0; counter < length_array; counter++)
    {
      sum = sum + *ptr;
      ptr++;
    }
return sum / counter;
}

unsigned int * sort_array(unsigned int *ptr, int length_array) //function definition
{ 
  int i,j,swap;
  
  for (i = 0; i < length_array; i++)
  {
    for (j = 1; j < length_array; j++)
    {
      if (ptr[i] > ptr[j])
      {
      continue;
      }
      else
      {
      swap = ptr[i];
      ptr[i] = ptr[j];
      ptr[j] = swap;
      }
  }
}
return ptr;
}