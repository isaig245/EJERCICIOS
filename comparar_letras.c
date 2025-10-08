#include <stdio.h>

int main() {
    char letra1, letra2;

    // Solicitar las dos letras al usuario
    printf("Introduce la primera letra: ");
    scanf(" %c", &letra1); 
    
    printf("Introduce la segunda letra: ");
    scanf(" %c", &letra2);

    // Comparar las letras directamente. valores ASCII.
    if (letra1 < letra2) {
        printf("\n La letra '%c' va primero alfabeticamente.\n", letra1);
    } else if (letra2 < letra1) {
        printf("\n La letra '%c' va primero alfabeticamente.\n", letra2);
    } else {
        printf("\n=> Las dos letras son iguales ('%c').\n", letra1);
    }

    // mayúsculas y minúsculas son diferentes :
    printf("\n*Recuerda que las mayúsculas (ej: 'A') van antes que las minusculas (ej: 'a').");

    return 0;
}
