#include <stdio.h>

int main() {
    int edad_minima = 18; // Definimos la edad mínima 
    int edad_usuario = 0; // Usamos esta variable para guardar la edad ingresada
    
   
    printf("Por favor, ingresa tu edad: ");
    
  
    scanf("%d", &edad_usuario);

    //inicia comparacion
    if (edad_usuario >= edad_minima) {
        printf("¡Felicidades! Puedes pasar.\n");
    } else {
        printf("Lo sentimos, no cumples con la edad mínima de %d años. No puedes pasar.\n", edad_minima);
    }

    return 0;//retorno un valor correctamente sin problema 
}
