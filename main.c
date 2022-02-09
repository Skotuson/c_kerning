#include <stdio.h>
#include <stdlib.h>

void kerning ( const char * str ) {
    while ( *str ) 
        printf( "%c ", *str++ );
    printf ( "\n" );
}

int main ( void ) {
    char * line = NULL;
    size_t size = 0;
    getline ( &line, &size, stdin );    
    kerning ( line );
    free ( line );
    return 0;
}