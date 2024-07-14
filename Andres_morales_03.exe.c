#include <stdio.h>
#include <string.h>

int main() {
    char cadena[] = "Hola, mundo!     ";
    int longitud = strlen(cadena);

   
    while (longitud > 0 && cadena[longitud - 1] == ' ') {
        cadena[longitud - 1] = '\0';
        longitud--;
    }

    printf("Cadena sin espacios en blanco al final: %s\n", cadena);

    return 0;
}