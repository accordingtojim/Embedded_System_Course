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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
int * print_statistics(int *array, int length_array);
void print_array(int *array, int length_array);
int find_median(int *array, int length_array);
int find_mean(int *array, int length_array);
unsigned int find_maximum(unsigned int *array, int length_array);
unsigned int find_minimum(unsigned int *array, int length_array);
unsigned int * sort_array(unsigned int  *array, int length_array);
/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
