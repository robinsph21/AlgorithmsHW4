# Algorithms Homework 4 -- Part A

## Sorting algorithms completed:

* quicksort A

## Included:

* **sortlib**
  * *sortlib.c / sortlib.h*
  * contains all the important common functions for sorting, i.e. generating random list of specific length, printing first and last 5 elements
    * **generate_random_num**
      * params: none
      * return: *int*
    * **generate_input**
      * params: *int* num_elements
      * return: *int[]*
    * **check_output**
      * params: *int* * arr, *int* size
      * return: *void*

* **quicksort**
  * *quicksort.c / quicksort.h*
  * contains a recursive quicksort algorithm that uses a helper partition function that does the sorting
    * **quicksort**
      * params: *int* * arr, *int* low, *int* high
      * return: *void*
    * **partition**
      * params: *int* * arr, *int* low, *int* high
      * return: *int*

* radixsort
  * *to be implemented*

* MAKEFILE

## make Usage:
make all -- makes both quicksort and radixsort
make quicksort -- makes quicksort
make radixsort -- makes radixsort
