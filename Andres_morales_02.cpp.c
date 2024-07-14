#include <stdio.h>
#include <string.h>

int main() {
    char cadena[] = "Programación en C";
    int n = 5;
    char resultado[20];

    int longitud = strlen(cadena);
    
    if (n >= longitud) {
        strcpy(resultado, cadena);
    } else {
        strncpy(resultado, cadena + (longitud - n), n);
    }

    resultado[n] = '\0';

    printf("Los últimos %d caracteres son: %s\n", n, resultado);

    return 0;
}