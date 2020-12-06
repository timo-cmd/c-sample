/* zemefassige für c-conditionals */
/* By Timo Sarkar 2020 */
#include <stdlib.h> // stdlib importiere
#include <string.h> // string importiere
#include <stdio.h> // stdio importiere
#include <math.h> // math importiere

/* prä-prozess conditionals */
#ifndef ___CONDITIONALS_C___ /* wenn diese datei nicht conditionals.c heisst... */
#define ___CONDITIONALS_C___ /* ...führe dann folgenden code aus: bennene diese datei: conditionals.c */
#endif /* ende der Abfragung */

int main( /* optionale variablen können hier für die ganze funktion vererbt werden */ ) { /* beginnen der Hauptfunktion: 'main' */

    /* erklärung if-else-else-if */
    bool wahr = true; /* Deklarieren eines wahrheits types namens 'wahr' mit dem wert: true */

    if (wahr == true) { /* wenn die Variable 'wahr' gleich true ist, dann führe folgenden code aus... */
        print("Wert ist true"); /* Der code gibt 'Wert ist true' aus */
    } else if (wert != true) { /* wenn der wert nicht gleich (!=) 'true' ist führe folgender code aus: */
        printf("Wert ist false"); /* Der code gibt 'Wert ist false' aus */
    } /* ende abfragung. Ausgabe: 'Wert ist true', da die variable wahr == true ist. */


    /* erklärung mehrseitige-selektion */
    /* eine mehrseitige-selektion ist eine Abfragung die mehr als nur einen Wert abfragt */
    int x; /* deklaration einer zahlenvariable namens 'x' ohne wert */
    printf("Geben sie eine Zahl zwischen 1 und 3 ein:") /* Andeutung auf eine Tasteneingabe */
    scanf_s("%i", &x); /* Der user erhält nun eine eingabe die nur Zahlen erlaubt*/
    switch (x) { /* beginnen einer switch funktion mit dem Wert 'x' */
        case 1: /*  wenn der User die Zahl '1' eingegeben hat, dan führe folgenden code aus... */
            printf("Sie haben eine 1 eingegeben!"); /* führe aus wenn case 1: richtig ist*/
            break; /* stoppe das Programm */
        case 2: /*  wenn der User die Zahl '2' eingegeben hat, dan führe folgenden code aus... */
            printf("Sie haben eine 2 eingegeben!"); /* führe aus wenn case 2: richtig ist */
            break; /* stoppe das Programm */
        case 3: /*  wenn der User die Zahl '3' eingegeben hat, dan führe folgenden code aus... */
            printf("Sie haben eine 3 eingegeben!"); /* führe aus wenn case 3: richtig ist */
            break; /* stoppe das Programm */
        default: /*  wenn der User keine Zahl oder keine zwischen 1 und 3 eingegeben hat, dan führe folgenden code aus... */
            printf("Sie haben einen unerlaubten Wert eingegeben!"); /* führe aus wenn defaukt: richtig ist */
            break; /* stoppe das Programm */
    } /* ende der Abfrage */
    /* bei einfügen des wertes 'continue;' wird das programm fortgefahren anstatt gestoppts */

    /* erklären operatorik */
    int y = 10; /* deklarieren der variabel 'y' mit dem wert 10 */
    if ( y > 1 /* wenn 'y' grösser als 1 ist... */ ) {
        // do some code in here
    }

    if ( y != 1 /* wenn 'y' nicht gleich 1 ist...*/) {
        // do some code here...
    }

    if ( y == 1 /* wenn 'y' gleich 1 ist...*/) {
        // do some code here...
    }

    if ( y = 1 || 2 /* wenn 'y' gleich 1  oder 2 ist...*/) {
        // do some code here...
    }

    if ( y != 1 && == 10 /* wenn 'y' nicht gleich 1 und gleich 10 ist...*/) {
        // do some code here...
    }

    /* erklärung Iterationen ( schleifen ) */
    int z; /* deklarierung der variabel z */
    int anzahl = 10; /* deklarieren der variabel anzahl mit wert 10 */
    for ( z = 1; /* zuweisen von 'variable: z' zu 1 */ z < anzahl; /* variabel z ist immer kleiner als anzahl 10 */ z = z + 2 /* z gleich 1 + 2 */ ) { 
        printf("%i", &z); /* solange z kleiner als anzahl 10 ist, addiere die 2 zum wert '1' von z */ /* dann gib den aktuellen wert von z an */
    }

    /* erklärung while-schleife */
    while ( z <= 10 ) { /* führe solange wie z kleiner oder gleich wie 10 ist...*/
        printf("%i", &z); /* gib den aktuellen wert aus */
        z = z + 2; /* und addiere 2 zum aktuellen wert von z */
    }

    do { /* führe folgenden code aus... */
        printf("%i", &z); /* gib den aktuellen wert von z aus */
        z = z + 2; /* und addiere 2 zum aktuellen wert von z */
    } while( z <= anzahl ); /* solange wiez kleiner oder gleich wie anzahl ist */

    // do-while, if-else, switches kann man auch ohne geschweifte klammern schreiben doch es ist dem nicht preferiert.

    system("pause"); /* pausiert das programm nicht dass es ausgeführt und geschlossen wird. */
    return 0; /* Wichtig!: Rückgabewert sollte immer 0 sein */
} /* ende der hauptfunktion */


/* Arigato gozai masu! */

