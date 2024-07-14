#include <stdio.h>
#include <string.h>

int main() {
    char cadena[] = "Hola, mundo!";
    int n = 5;
    char resultado[20];

    strncpy(resultado, cadena, n);
    resultado[n] = '\0';

    printf("Los primeros %d caracteres son: %s\n", n, resultado);

    return 0;
}