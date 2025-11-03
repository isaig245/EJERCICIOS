#include <stdio.h>

int main() {
    
    // 1. Inicialización: Declaramos y definimos la variable de control antes del ciclo.
    // **int i = 1** es nuestro contador, y empezamos desde 1.
    int i = 1; 
    // 2. Condición: El ciclo se ejecutará **MIENTRAS** la condición entre paréntesis sea verdadera.
    // En este caso, **mientras i sea menor o igual a 5**.
    while (i <= 5) {
        
        // Cuerpo del ciclo
        printf("Número de repetición: %d\n", i);
        
        // 3. Incremento/Decremento: **DEBEMOS** cambiar la variable de control dentro del cuerpo del ciclo.
        // Si olvidamos este paso, la condición (i <= 5) nunca se volverá falsa y tendremos un **ciclo infinito**.
        // **i++** asegura que el contador avance de uno en uno.
        i++; 
    }
    
    // Este mensaje se imprime una vez que el ciclo termina (cuando i ya es 6).
    printf("El ciclo ha terminado de contar.\n"); 

    return 0;
}
