#include <stdio.h>
#include <string.h>

void insertarCadena(char *cadena, const char *cadenaAInsertar, int p) {
    int longitudCadena = strlen(cadena);
    int longitudCadenaAInsertar = strlen(cadenaAInsertar);

    if (p > longitudCadena) {
        p = longitudCadena; 
    }

    memmove(&cadena[p + longitudCadenaAInsertar], &cadena[p], longitudCadena - p + 1); 
    memcpy(&cadena[p], cadenaAInsertar, longitudCadenaAInsertar);
}

int main() {
    char cadena[100] = "Insertar dentro de esta cadena";
    const char cadenaAInsertar[] = "nueva ";

    insertarCadena(cadena, cadenaAInsertar, 9);

    printf("Cadena resultante: %s\n", cadena);

    return 0;
}