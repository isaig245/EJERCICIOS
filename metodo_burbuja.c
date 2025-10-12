#include <stdio.h>
int main() {
    int numeros[6] = {5, 1, 9, 4, 7,10};
    int N = 6;
    int i, j, temp;
    printf("Arreglo original: ");// muestra el arreglo original 
    for (i = 0; i < N; i++) { // inicializo el arreglo en 0, siempre y cuando i<n va a pasar al siguiente nuerro 
        printf("%d ", numeros[i]);
    }

    // Método burbuja
    for (i = 0; i < N - 1; i++) { // ciclo analisis  
        for (j = 0; j < N - i -1 ; j++) {/*
        n y el -1 nos dira cuantas veces vamos a iterar leyendo un numero
        y si se cumple nuestra condicion y cambia la iteracion 
        Se intercambian → [1, 5, 9, 4, 7]
        
        */
            if (numeros[j] > numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
                /*
    temp = numeros[0];         temp = 5
    numeros[0] = numeros[1];   numeros[0] = 1
    numeros[1] = temp;        numeros[1] = 5
                */
            }
        }
printf("\nDespués de la pasada %d: ", i + 1);
for (int k = 0; k < N; k++) {
    printf("%d ", numeros[k]);
}
    }// fin del ciclo analisis 

    printf("\nArreglo ordenado: ");
    for (i = 0; i < N; i++) {
        printf("%d ", numeros[i]); // impresion del ciclo analisis 
    }
    return 0;
}
