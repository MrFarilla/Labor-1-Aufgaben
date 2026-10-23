#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /* Jeder Variable einen Datentyp hinzufügen */
    int zahl;
    float komma;
    char zeichen;

    /* Eingabebereich für die Werte */
    scanf("%d %f %c", &zahl, &komma, &zeichen);

    /* %010d gibt die Ganzzahl mit 10 Stellen und führenden Nullen aus */
    printf("Ganzzahlen    : %010d\n", zahl);

    /* %.5f gibt die Gleitkommazahl mit 5 Nachkommastellen aus */
    printf("Gleitkommazahl: %.5f\n", komma);

    /* %c gibt das eingelesene Zeichen aus */
    printf("Zeichen       : %c\n", zeichen);

    return 0;
}
