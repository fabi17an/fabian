#include <stdio.h>

int main() {
    int N, i=1, suma=0;

    printf("ingresar un numero entero:");
    scanf("%d", &N);

    while (i<=N){
        suma +=i;
        i++;
        i++;
    }
    printf("la suam de los numeros pares es: %d\n", suma);
    return 0;
}