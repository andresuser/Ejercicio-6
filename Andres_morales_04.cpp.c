#include <stdio.h>
#include <string.h>

int main() {
    char cadena[] = "     Hola, mundo!";
    int i = 0;
    
    while (cadena[i] == ' ') {
        i++;
    }

    strcpy(cadena, &cadena[i]);

    printf("Cadena sin espacios en blanco al inicio: %s\n", cadena);

    return 0;
}