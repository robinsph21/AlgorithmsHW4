/* radixsort.c -- running radixsort on a randomly generated list.
 * Authors: Philip Robinson, Hayden Liao
 *
 * Usage: ./radixsort [LIST_SIZE]
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sortlib.h"
#include "radixsort.h"

// rad9xsort on the array
void radixsort( int arr[], int length, int maxsize ) {
    // https://www.geeksforgeeks.org/radix-sort/
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

    // Sort the array using radixsort. This is in done in place on the heap
    radixsort(array, 0, num_elements);

    // Print the first and last 5 elements to check if the sorting is working
    check_output( array, num_elements );

    // free and exit
    free( array );

    return EXIT_SUCCESS;
}
