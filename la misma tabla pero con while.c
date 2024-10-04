#include <stdio.h>

int main() {
    int num, i = 1;

    // Solicitar al usuario que ingrese un número
    printf("Introduce un número para mostrar su tabla de multiplicar: ");
    scanf("%d", &num);

    // Usar la estructura while para generar la tabla de multiplicar
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}
