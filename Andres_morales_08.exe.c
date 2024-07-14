#include <stdio.h>
#include <string.h>

void sustituirCadena(char *cadena, const char *subcadenaABuscar, const char *nuevaSubcadena) {
    char *posicion = strstr(cadena, subcadenaABuscar);

    if (posicion != NULL) {
        int longitudAntes = posicion - cadena;
        int longitudDespues = strlen(posicion + strlen(subcadenaABuscar));

        char resultado[100];
        strncpy(resultado, cadena, longitudAntes);
        resultado[longitudAntes] = '\0';
        strcat(resultado, nuevaSubcadena);
        strcat(resultado, posicion + strlen(subcadenaABuscar));

        strcpy(cadena, resultado);
    }
}

int main() {
    char cadena[] = "Sustituir esta subcadena por una nueva dentro de la cadena principal.";
    const char subcadenaABuscar[] = "esta subcadena";
    const char nuevaSubcadena[] = "la nueva subcadena";

    sustituirCadena(cadena, subcadenaABuscar, nuevaSubcadena);

    printf("Cadena resultante: %s\n", cadena);

    return 0;
}