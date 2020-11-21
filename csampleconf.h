/* C-samples project config file */
/* built by Timo Sarkar 2020 */

#include <stdlib.h> // stdlib importiere
#include <string.h> // string importiere
#include <stdio.h> // stdio importiere
#include <math.h> // math importiere

/* prä-prozess conditionals */
#ifndef __CSAMPLECONF_H__ /* wenn diese datei nicht conditionals.c heisst... */
    #define __CSAMPLECONF_H__ /* ...führe dann folgenden code aus: bennene diese datei: conditionals.c */
#endif /* ende der Abfragung */

#ifndef NAN
    #include <math.h>
    #include <conio.h>
    #define NAN  NAN != (int)
#endif

