#include <stdio.h>

int main() {
    int num, i;
    int factorial = 1;
    int sumafact = 0;

    // Leer un número entero desde la entrada estándar
    printf("Ingrese un numero entero:\n");
    scanf("%d", &num);

    if (num < 0) {
        printf("El factorial de un numero negativo no está definido.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial *= i;
            sumafact += factorial;
        }

        // Imprimir el resultado
        printf("La suma de los factoriales de los numeros del 1 al %d es: %d\n", num, sumafact);
    }

    return 0;
}
