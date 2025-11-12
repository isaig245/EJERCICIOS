#include <stdio.h>
int main() {
    int numeros[5];  // Declaramos un vector de 5 enteros
    //sera un espacio donde almacenaremos informacion 
    int i;
    //  Llenamos el vector
    for (i = 0; i < 5; i++) {
        printf("Ingresa un número [%d]: ", i);
        //en este ciclo mi variable i es la que recorre el ciclo, pero no solo va a recorrer 
        //asignaremos un valor a ella 
        scanf("%d", &numeros[i]);  // Guardamos el número en la posición i segun el numero que nos da el usuari
    }
//numeros[i] → accede al contenido (valor).
//&numeros[i] → accede a la dirección de memoria (dónde se guarda ese valor).
// Mostramos el contenido
    printf("\nLos números que ingresaste son:\n");
    for (i = 0; i < 5; i++) {
        printf("Posición %d -> %d\n", i, numeros[i]);
    }
    return 0;
}
