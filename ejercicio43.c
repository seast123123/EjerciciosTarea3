// Ejercicio # 41 Sebastian Cadena

#include <stdio.h>

int main() {
    int n1 = 0, n2 = 1, sum = 0, i;

    // Calcula la suma de los elementos de Fibonacci menores o iguales a 100
    while(n1 + n2 <= 100) {
        sum += n1 + n2;
        n2 = n1 + n2;
        n1 = n2 - n1;
    }

    printf("La suma de los elementos de la serie de Fibonacci entre 0 y 100 es: %d\n", sum);

    return 0;
}
