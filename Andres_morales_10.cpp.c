#include <stdio.h>
#include <string.h>

void borrarOcurrencias(char *cadena, const char *subcadena) {
    int longitudSubcadena = strlen(subcadena);
    char *posicion = strstr(cadena, subcadena);

    while (posicion != NULL) {
        memmove(posicion, posicion + longitudSubcadena, strlen(posicion + longitudSubcadena) + 1);
        posicion = strstr(cadena, subcadena);
    }
}

int main() {
    char cadena[] = "Eliminar todas las ocurrencias de esta subcadena dentro de la cadena principal. Esta subcadena debe desaparecer por completo.";
    const char subcadena[] = "subcadena";

    borrarOcurrencias(cadena, subcadena);

    printf("Cadena resultante: %s\n", cadena);

    return 0;
}