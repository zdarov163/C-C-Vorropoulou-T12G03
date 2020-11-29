#include <stdio.h>

int main()
{
        //positive Ganzzahl <= char
        unsigned char augenzahl = 20;
        printf("Ein D20 hat %hhu Seiten!\n", augenzahl);

        //String <= char
        char farbe = 's';
        printf("Meine Lieblingsfarbe ist [%c]chwarz!\n", farbe);

        //positive Ganzzahl <= char
        unsigned char minuten = 56;
        printf("Es sind %hhu minuten nach Mitternacht!\n", minuten);

        //Reelle Zahl kann nicht dargestellt werden, daher float oder double
        float kotangens = 3.4567;
        printf("Der Kotangens hat einen Wert von %f!\n", kotangens);

        //Positive Ganzzahl > unsiged int| <= unsigned long
        unsigned long pixel = 2073600;
        printf("Mein Tablet hat einen FullHD Bildschirm. Das sind %lu Pixel!\n", pixel);

        //Positive Ganzzahl > unsinged char| <= unsiged int
        unsigned int erdumfang = 40075;
        printf("Die Erde hat einen Umfang von %i Kilometern!\n", erdumfang);

        return 0;
}
