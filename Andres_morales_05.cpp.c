#include <stdio.h>
#include <string.h>

void eliminarCaracteres(char cadena[], int p, int n) {
    int longitud = strlen(cadena);
    
    if (p >= longitud) {
        printf("La posición p está fuera de los límites de la cadena.\n");
        return;
    }

    if (p + n >= longitud) {
        cadena[p] = '\0';     } else {
        memmove(&cadena[p], &cadena[p + n], longitud - p - n + 1); 
    }
}

int main() {
    char cadena[] = "Eliminar estos caracteres";
    int posicion = 9;
    int cantidad = 5;

    eliminarCaracteres(cadena, posicion, cantidad);

    printf("Cadena resultante: %s\n", cadena);

    return 0;
}