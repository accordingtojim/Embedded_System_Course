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

//Constant variable
#define SIZE (40)

//Global variable
unsigned int prova;

//Function declaration
int * print_statistics(int *array, int length_array);
void print_array(int *array, int length_array);
int find_median(int *array, int length_array);
int find_mean(int *array, int length_array);
unsigned int find_maximum(unsigned int *array, int length_array);
unsigned int find_minimum(unsigned int *array, int length_array);
unsigned int * sort_array(unsigned int  *array, int length_array);

void main() {

unsigned int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                            114, 88,   45,  76, 123,  87,  25,  23,
                            200, 122, 150, 90,   92,  87, 177, 244,
                            201,   6,  12,  60,   8,   2,   5,  67,
                              7,  87, 250, 230,  99,   3, 100,  90};
int s;
//sort_array(test,40);

printf("%u",find_maximum(test,40));
printf("%u",find_m(test,40));

}

//Function definition
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

unsigned int * sort_array(unsigned int array[], int length_array) //decreasing order
{ 
  int i,j,swap; 
  for (i = 0; i < length_array; i++)
  {
    for (j = i+1; j < length_array; j++)
    {
      if (array[i] > array[j])
      {
      continue;
      }
      else
      {
      swap = array[i];
      array[i] = array[j];
      array[j] = swap;
      }
    }
  }  
}

unsigned int find_maximum(unsigned int *array, int length_array)
{
 sort_array(array,length_array);
 return *array;
 //return *(sort_array(array,length_array));   ->  this somehow gives segmentation fault, so split in two commands to make it run
}

unsigned int find_minimum(unsigned int *array, int length_array)
{
 sort_array(array,length_array);
 return *(array+length_array-1);
}