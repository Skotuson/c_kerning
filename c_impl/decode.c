#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void stripLF ( char * str ) {
    int l = strlen ( str );
    if ( str[l - 1] == '\n' )
        str[l - 1] = '\0';
}

void decode ( const char * str ) {
    int spc = 0;
    while ( *str ) {
        if ( !isspace ( *str ) ) {
            printf( "%s%c", spc > 1 ? " " : "", *str );
            spc = 0;
        }
        else spc++;
        str++;
    }
    printf( "\n" );
}

int main ( void ) {
    char * line = NULL;
    size_t size = 0;
    while ( getline ( &line, &size, stdin ) != - 1 ) {
        stripLF ( line );
        decode ( line );
    }
    free ( line );
}