/* quicksort.c -- running quick sort on a randomly generated list.
 * Authors: Philip Robinson, Hayden Liao
 *
 * Usage: ./quicksort [LIST_SIZE]
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sortlib.h"
#include "quicksort.h"

// quicksort on the array
void quicksort( int arr[], int low, int high ) {
    // quicksort implemented in-place, recursively with a partition function
    // If there is something to sort, partition and sort.
    if( low < high ) {
        int part = partition( arr, low, high );
        // Call recursively
        quicksort( arr, low, ( part - 1 ) ); // Sort before the division
        quicksort( arr, ( part + 1 ), high ); // Sort after the division
    }

    // return sorted_array;
}

// Partition sorts a partition of the array
int partition( int arr[], int low, int high ) {
    // Set up local variables
    int pivot = arr[high];
    int smallest = ( low - 1 );
    int i;
    int temp;

    for ( i = low; i <= ( high - 1 ); i++ ) {
        // If current element is smaller than the pivot
        if ( arr[i] < pivot ) {
            // Increment the smallest element
            smallest++;
            // Switch the elements
            temp = arr[smallest];
            arr[smallest] = arr[i];
            arr[i] = temp;
        }
    }
    // Switch the pivot at the end
    temp = arr[smallest + 1];
    arr[smallest + 1] = arr[high];
    arr[high] = temp;
    // Return the last smallest position + 1
    return ( smallest + 1 );
}

////////////////////////////////////////////////////////////////////////////////////////////////////

int main( int argc, char const *argv[] ) {
    // Error check input
    if ( argc != 2 ) {
        printf( "Incorrect number of arguments! Usage: %s [POSITIVE INTEGER]\n", argv[0] );
        exit( EXIT_FAILURE );
    }
    // Get the number the user passed in
    int num_elements = atoi( argv[1] );
    if ( num_elements <= 0 ) {
        printf( "Must use a number greater than 0! Usage: %s [POSITIVE INTEGER]\n", argv[0] );
        exit( EXIT_FAILURE );
    }

    // Generate the input. The array pointer points to an array already alloced to the heap
    int * array = generate_input( num_elements );

    // Sort the array using quicksort. This is in done in place on the heap
    quicksort(array, 0, num_elements);

    // Print the first and last 5 elements to check if the sorting is working
    check_output( array, num_elements );

    // free and exit
    free( array );

    return EXIT_SUCCESS;
}
