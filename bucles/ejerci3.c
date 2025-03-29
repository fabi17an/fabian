#include <stdio.h>

int main() {
    int x, i = 1;
    
    printf("Ingrese un número para ver su tabla de multiplicar: ");
    scanf("%d", &x);

    while (i <= 10) {
        printf("%d x %d = %d\n", x, i, x * i);
        i++;
    }

    return 0;
}