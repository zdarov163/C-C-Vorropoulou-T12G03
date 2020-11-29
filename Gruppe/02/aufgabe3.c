#include <stdio.h>

void addition(char a, char b)        //Deklaration der Additionsfunktion
{
        int sum = a + b;        //Berechnung der Summe von a und b
        printf("%4hhu + %4hhu = %4i\n", a, b, sum);        //Ausgabe der Rechnung mit Ergebnis
}

void multiplication(char a, char b)        //Deklaration der Multiplikationsfunktion
{
        int prod = a * b;        //Berechnung des Produkts von a und b
        printf("%4hhu * %4hhu = %4i\n", a, b, prod);        //Ausgabe der Rechnung mit Ergebnis
}

void mean(char a, char b)        //Deklaration der Durchschnittsfunktion
{
        float mean = (float)(a+b)/2;        //Berechnung des arithmetischen Mittels von a und b
        printf("(%4hhu + %4hhu)/2 = %4.2f\n", a, b, mean);        //Ausgabe der Rechnung mit Ergebnis
}

int main()
{
        char a, b;        //Deklaration der Variablen a und b

        //Zuweisung der Werte von a und b
        a = 1;
        b = 2;

        //Ausgabe der Werte von a und b
        printf("number a : %4hhu\n", a);
        printf("number b : %4hhu\n", b);

        //Aufrufen der Funktionen der Rechenoperationen mit a und b
        addition(a, b);
        multiplication(a, b);
        mean(a, b);
        
        //Begin 2. Durchlauf mit neuen Werten von a und b
        a = 3;
        b = 5;
        
        //Aufrufen der Funktionen der Rechenoperationen mit a und b
        addition(a, b);
        multiplication(a, b);
        mean(a, b);        
        
        return 0;        //Programmm ist korrekt durchgelaufen
}
