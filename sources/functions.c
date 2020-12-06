#include <stdio.h>
#include <stdlib.h>

#if defined(_WIN32)
#include <math.h>
#endif

#ifndef NAN
#define NAN NULL // try to add own NaN value asap
#endif

int main( argc, char* argv ) /* main function */ {
    // code goes here
    return 0; /* return error code 0 */
}

void greet( argc, char* argv, NAN, void ) { // initialisieren der funktion 'greet' mit übergabe von standart charakteren und 'Not A number'
    printf( "Hello from function 'greet' !" ); // some casual code xD
}

void greet2( argc, char* argv, void ) { // initialisieren der funktion 'greet' mit übergabe von standart charakteren
    greet(); // ausführen der 'greet funktion'
    printf( "Hello from function 'greet2' !" ); // some casual code too xD
}

greet2(); // ausführen von funktion greet2
/* output: 
*  Hello from function 'greet' ! 
*  Hello from function 'greet2' ! 
*/


