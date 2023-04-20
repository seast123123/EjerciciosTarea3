#include <stdio.h>

int main() {
    int i, producto;
    printf("Tabla de multiplicar del 5:\n");
    for(i = 1; i <= 10; i++) {
        producto = 5 * i;
        printf("5 x %d = %d\n", i, producto);
    }
    return 0;
}
