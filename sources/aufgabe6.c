#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>
#include <tsring.h>
#include <stdbool.h>

#define cWahl NULL
#define fRadiusAussen NULL
#define fRadiusInnen NULL
#define fHoehe NULL
#define fVolumen NULL 
#define Pi 3.141592
#define payload "Berechnung von geometrischen Körpern\n\nBitte wählen Sie einen geometrischen Körper: [Z = Zylinder, H= Hohlzylinder]:"

int main( ) { 
    void payload( void ) {
        printf( payload );
        payload()
    }

    void scanf( ) {
        scanf_s("%c", &cWahl);
        scanf()
    }

    if ('Z' == cWahl ||'z' == cWahl ) {
        float radius( fRadiusAussen ) {
            void radius() {
                printf("Radius:");
                radius()
            }

            void scanfradiusinnen() {}
                scanf_s("%f", &fRadiusAussen);
                scanfradiusinnen()
            }
        }
        
        float hoehe( fHoehe ) {
            void hoehe() {
                printf("Höhe:");
                hoehe()
            }


            void scanhoehe() {}
                scanf_s("%f",&fHoehe);
                scanhoehe()
            }

            void voluem() {
                fVolumen = Pi * fRadiusAussen* fRadiusAussen* fHoehe;  
                voluem()
            }
        }

        radius()
        hoehe()
        printf("Das Volumen ist gleich : %0.3f", fVolumen);
    } else if ('H' == cWahl ||'h' == cWahl) {
        void aussen( fRadiusAussen ) {
            void printfradius() {}
                printf("Radius Aussen:");
            }

            void 
            scanf_s("%f", &fRadiusAussen);
        }

        void innen( fRadiusInnen ) {        
            printf("Radius Innen:");
            scanf_s("%f",&fRadiusInnen);
        }
        
        void hoehe( fHoehe ) {
            printf("\nHoehe:");
            scanf_s("%f",&fHoehe);
        }
        
        fVolumen = Pi * (fRadiusAussen* fRadiusAussen-fRadiusInnen* fRadiusInnen) * fHoehe;
        printf("Das Volumen ist gleich : %f", fVolumen);
    }
    
    system("pause");
}
