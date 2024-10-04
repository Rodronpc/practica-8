#include <stdio.h>

// Prototipo de la función
void tablaDeMultiplicar(int numero);

int main() {
    int numero;
    printf("Introduce un número entero: ");
    scanf("%d", &numero);
    tablaDeMultiplicar(numero);
    return 0;
}

void tablaDeMultiplicar(int numero) {
    int i = 1;
    do {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    } while (i <= 10);
}
