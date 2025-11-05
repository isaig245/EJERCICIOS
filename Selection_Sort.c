#include <stdio.h>

int main() {
    // 1. Inicialización de datos
    int numeros[6] = {5, 1, 9, 4, 7, 10}; // arreglo
    int N = 6;                          // Tamaño del arreglo.
    int i, j, indiceMinimo, temp;       // Variables

    printf("Arreglo original: ");
    for (i = 0; i < N; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    // Método de Selección (Selection Sort)


    // CICLO EXTERNO (Pasadas): Controla la posición que vamos a llenar.
    // 'i' marca el inicio de la sección NO ORDENADA.
    for (i = 0; i < N - 1; i++) { 
        
        // 1. Asumir que el elemento actual (en la posición 'i') es el más pequeño.
        indiceMinimo = i; 
        
        // CICLO INTERNO (Búsqueda): Busca el elemento realmente más pequeño en el resto del arreglo.
        // 'j' recorre los elementos a la derecha de 'i'.
        for (j = i + 1; j < N; j++) {
            
            // CONDICIÓN: Si encontramos un número más pequeño que el actual 'indiceMinimo'...
            if (numeros[j] < numeros[indiceMinimo]) {
                // Actualizar el índice: Ahora el más pequeño está en la posición 'j'.
                indiceMinimo = j;
            }
        }
        
        // 2. INTERCAMBIO (SWAP): Si el índice mínimo que encontramos es diferente del actual 'i'...
        // ...significa que encontramos uno más pequeño y debemos intercambiarlos.
        if (indiceMinimo != i) {
            // Guardar el valor en la posición 'i' temporalmente.
            temp = numeros[i];
            
            // Mover el valor más pequeño a la posición 'i'.
            numeros[i] = numeros[indiceMinimo];
            
            // Poner el valor que estaba en 'i' en la posición donde estaba el más pequeño.
            numeros[indiceMinimo] = temp;
        }

        // Muestra cómo queda el arreglo después de CADA pasada
        printf("Paso %d (el %d es el menor): ", i + 1, numeros[i]);
        for (int k = 0; k < N; k++) {
            printf("%d ", numeros[k]);
        }
        printf("\n");
    } 

    // 3. Resultado Final
    printf("\nArreglo ordenado: ");
    for (i = 0; i < N; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    
    return 0;
}
