#define cWahl NULL
#define fRadiusAussen NULL
#define fRadiusInnen NULL
#define fHoehe NULL
#define fVolumen NULL 
#define Pi 3.141592

int main( ) { 
    printf("Berechnung von geometrischen Körpern\n\n");
    printf("Bitte wählen Sie einen geometrischen Körper: [Z = Zylinder, H= Hohlzylinder]:");
    scanf_s("%c", &cWahl);

    if ('Z' == cWahl ||'z' == cWahl ) {
        float radius( fRadiusAussen ) {
            printf("Radius:");
            scanf_s("%f", &fRadiusAussen);
        }
        
        float hoehe( fHoehe ) {
            printf("Höhe:");
            scanf_s("%f",&fHoehe);fVolumen = Pi * fRadiusAussen* fRadiusAussen* fHoehe;  
        }

        radius()
        hoehe()
        printf("Das Volumen ist gleich : %0.3f", fVolumen);
    } else if ('H' == cWahl ||'h' == cWahl) {
        void aussen( fRadiusAussen ) {
            printf("Radius Aussen:");
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