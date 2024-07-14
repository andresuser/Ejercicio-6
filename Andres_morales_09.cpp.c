#include <stdio.h>
#include <string.h>

int contarOcurrencias(const char *cadena, const char *subcadena) {
    int contador = 0;
    int longitudCadena = strlen(cadena);
    int longitudSubcadena = strlen(subcadena);

    if (longitudSubcadena == 0) {
        return 0; // Si la subcadena es vacía, devolver 0
    }

    for (int i = 0; i <= longitudCadena - longitudSubcadena; i++) {
        if (strncmp(&cadena[i], subcadena, longitudSubcadena) == 0) {
            contador++;
        }
    }

    return contador;
}

int main() {
    const char cadena[] = "La cadena principal contiene una subcadena, y otra subcadena dentro de ella.";
    const char subcadena[] = "subcadena";

    int ocurrencias = contarOcurrencias(cadena, subcadena);

    printf("La subcadena '%s' aparece %d veces en la cadena.\n", subcadena, ocurrencias);

    return 0;
}