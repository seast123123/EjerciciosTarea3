#include <stdio.h>

int main() {
    int num;
    printf("Ingrese un número entero: ");
    scanf("%d", &num);

    while(num >= 10) {
        num /= 10;
    }

    printf("El primer dígito es %d\n", num);

    return 0;
}
