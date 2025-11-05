#include <stdio.h>
int main() {
    // 1. Inicialización de datos
    int numeros[6] = {5, 1, 9, 4, 7, 10}; // Nuestro arreglo desordenado.
    int N = 6;                          // Tamaño del arreglo (6 elementos).
    int i, j, temp;                     // declaracion de variables 

    printf("Arreglo sin modificar: ");
    for (i = 0; i < N; i++) {
        printf("%d ", numeros[i]);
    }
    // solo mandaremos a imprimir nuestra informacion 
    printf("\n");

    // 1 er CICLO o ciclo EXTERNO Controla cuántas "vueltas completas" damos al arreglo. 
    // Garantiza que el elemento más grande de cada pasada llegue a su posición final.
    for (i = 0; i < N - 1; i++) { 
        
        // CICLO INTERNO (Comparaciones): Recorre la parte no ordenada del arreglo.
        // Aquí es donde se comparan y se intercambian los pares.
        for (j = 0; j < N - i - 1; j++) {
            
            // CONDICIÓN: Si el número actual es MAYOR que el siguiente...
            if (numeros[j] > numeros[j + 1]) {
                
                // INTERCAMBIO (SWAP): Mover los dos números de posición.
                // 1. Guardar el número mayor temporalmente (en temp)
                temp = numeros[j];          
                
                // 2. Mover el número menor a la posición actual
                numeros[j] = numeros[j + 1]; 
                
                // 3. Poner el número mayor en la posición siguiente
                numeros[j + 1] = temp;       
            }
        }
        
        // Muestra cómo queda el arreglo después de CADA pasada
        printf("Paso %d (el %d ya está al final): ", i + 1, numeros[N - 1 - i]);
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
