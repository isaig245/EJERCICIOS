#include <stdio.h>

int main() {
    // 1. Inicialización de datos
    // La lista tiene 11 números.
    int numeros[11] = {9, 7, 44, 2, 4, 5, 1, 0, 10, 50, 8}; 
    int N = 11; // Tamaño del arreglo
    int i, j, indiceMinimo, temp;

    printf("Arreglo original (%d elementos): ", N);
    for (i = 0; i < N; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // 2. Método de Selección (Selection Sort)
 
    // CICLO EXTERNO (Pasadas): Recorre N-1 veces el arreglo.
    for (i = 0; i < N - 1; i++) { 
        
        // Asumimos que el elemento en la posición 'i' es el más pequeño.
        indiceMinimo = i; 
        
        // CICLO INTERNO (Búsqueda): Busca el elemento más pequeño en el resto.
        for (j = i + 1; j < N; j++) {
            
            // Si el número actual (j) es menor que el mínimo conocido...
            if (numeros[j] < numeros[indiceMinimo]) {
                // Actualizar: ¡Este es el nuevo índice mínimo!
                indiceMinimo = j;
            }
        }
        
        // 3. INTERCAMBIO (SWAP): Si encontramos un mínimo diferente, lo movemos a la posición 'i'.
        if (indiceMinimo != i) {
            temp = numeros[i];
            numeros[i] = numeros[indiceMinimo];
            numeros[indiceMinimo] = temp;
        }
        
        // Muestra el progreso (Opcional)
        printf("Paso %2d: ", i + 1);
        for (int k = 0; k < N; k++) {
            printf("%d ", numeros[k]);
        }
        printf("\n");
    } 

    // 4. Resultado Final
    printf("\nArreglo ordenado: ");
    for (i = 0; i < N; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    
    return 0;
}
