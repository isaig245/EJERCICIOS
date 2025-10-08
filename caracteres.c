#include <stdio.h>
#include <string.h> 

void burbuja(char str[]) {
    int n = strlen(str);
    int i, j;
    char temp;

  
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Comparación de caracteres: si la letra actual es mayor que la siguiente,
            // se intercambian, poniendo la menor primero.
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char mi_nombre[] = "emma"; // Puedes cambiar esto al nombre que quieras
    
    printf("Nombre original: %s\n", mi_nombre);

    burbuja(mi_nombre);

    printf("Letras ordenadas: %s\n", mi_nombre);

    return 0;
}
