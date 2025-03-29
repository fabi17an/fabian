#include <stdio.h>
#include <string.h>

int main() {
    char palabra[100]; 
    
    printf("Ingrese una palabra: ");
    scanf("%s", palabra); 
    int longitud = 0;
    while (palabra[longitud] != '\0') {
        longitud++;
    }
    printf("Palabra invertida: ");
    for (int i = longitud - 1; i >= 0; i--) {
        printf("%c", palabra[i]);
    }
    
    printf("\n");
    return 0;
}