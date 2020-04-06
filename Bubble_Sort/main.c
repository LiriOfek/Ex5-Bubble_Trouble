/********************************************************\
File Name: main.c
Author: Liri (6/4/2020)
Purpose: This file sort given array, with given size
\********************************************************/

#include <stdio.h>

#define SIZE_OF_ARRAY (10)
#define INITIAL_INDEX (0)
#define INITIAL_NUMBER (1)

void bubble_sort(int array[], int size_of_array)
{
	/********************************************************\
	* Function name - bubble_sort
	*
	* Function Purpose - sort given array in ascending order
	*
	* Parameters - IN long array[] - the array that need to be sorted
	*			   IN int size_of_array - the size of the given array
	*
	* Return Value - there isn't return value
	*
	* Side Effects - this function change the given array
	*				 sort the given array
	*
	* Semantics - this function sort the given array
	*				in ascending order
	*
	* Author - Liri
	\********************************************************/
	int external_index = INITIAL_INDEX; /*index of array in external loop*/
	int internal_index = INITIAL_INDEX; /*index of array in internal loop*/
	int swapping_element = INITIAL_NUMBER; /*the bigger element
										   that need to swap*/

	for (external_index = 0; external_index < size_of_array - 1; ++external_index)
	{
		for (internal_index = 0; internal_index < size_of_array - external_index - 1; ++internal_index)
		{
			if (array[internal_index] > array[internal_index + 1])
			{
				/*swapping*/
				swapping_element = array[internal_index];
				array[internal_index] = array[internal_index + 1];
				array[internal_index + 1] = swapping_element;
			}
		}
	}
}

void main()
{
	/********************************************************\
	* Function name - main
	*
	* Function Purpose - print the elements of given array
	*					 call function that sort the array
	*					 print the sorted array
	*
	* Parameters - no Input/Output parameters
	*
	* Return Value - there isn't return value
	*
	* Side Effects - the given array changed to be sorted
	*
	* Semantics - print the elements of given array
	*			  call function that sort the array
	*			   print the sorted array
	*
	* Author - Liri
	\********************************************************/
	int array[SIZE_OF_ARRAY] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int index = INITIAL_INDEX;

	printf("The initial array:\n");
	for (index = INITIAL_INDEX; index < SIZE_OF_ARRAY; ++index)
	{
		printf("%d ", array[index]);
	}

	/*sort the array*/
	bubble_sort(array, SIZE_OF_ARRAY);

	printf("\nThe sorted array:\n");
	for (index = INITIAL_INDEX; index < SIZE_OF_ARRAY; ++index)
	{
		printf("%d ", array[index]);
	}
	printf("\n");
}