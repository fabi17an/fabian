#include <stdio.h>

int main() {
    int num, contador = 0;
    
    printf("Ingrese un número entero: ");
    scanf("%d", &num);

    if (num == 0) {
        contador = 1;  
    } else {
        while (num != 0) {
            num /= 10;  
            contador++; 
        }
    }

    printf("El número tiene %d dígitos.\n", contador);
    return 0;
}