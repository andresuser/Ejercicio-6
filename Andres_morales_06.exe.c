#include <stdio.h>
#include <string.h>

void eliminarPrimeraAparicion(char *cadena, const char *subcadena) {
    char *posicion = strstr(cadena, subcadena);

    if (posicion != NULL) {
        memmove(posicion, posicion + strlen(subcadena), strlen(posicion + strlen(subcadena)) + 1);
    }
}

int main() {
    char cadena[] = "Eliminar la primera aparición de esta subcadena dentro de la cadena principal.";
    const char subcadena[] = "esta subcadena ";

    eliminarPrimeraAparicion(cadena, subcadena);

    printf("Cadena resultante: %s\n", cadena);

    return 0;
}