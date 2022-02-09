#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    char * line = NULL;
    size_t size = 0;
    printf( "Enter word/sentence:\n" );
    getline ( &line, &size, stdin );    


    free ( line );
    return 0;
}