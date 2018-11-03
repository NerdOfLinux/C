#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "core.h"
#include "core.c"
int main( int argc, char *argv[] ){
    int max;
    char *filename;
    //If there are less than 2 args
    if(argc < 2){
        printf("Please run with the arguments being the highest possible number(0 for infinity), and the filename(leave blank for default).\n");
        return 1;
    }

    max = atoi( argv[1] );
    //If arg2 exists, use it as the filename, or fall back to the default
    if ( argc == 3 ) {
        filename = argv[2];
    } else {
        filename = "primenums.txt";
    }
    int num = 0;
    //Open a file
    FILE *file = fopen( filename, "a" );

    if( max > 0 ){
        while( num <= max ){
            if( is_prime( num ) ){
	      printf( "%d\n", num );
              fprintf( file, "%d,", num );
            }
            num++;
        }
    } else if( max == 0 ) {
        while( 1 ){
            if( is_prime( num ) ){
                printf( "%d\n", num );
                fprintf( file, "%d,", num );
            }
            num++;
        }
    }
    fclose( file );
    return 0;
}
