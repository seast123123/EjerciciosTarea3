// Ejercicio # 27 Sebastian Cadena

#include <stdio.h>

int contar_digitos(int num) {
    int count = 0;
    while(num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

int main() {
    int num1, num2, digitos1, digitos2;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    digitos1 = contar_digitos(num1);
    digitos2 = contar_digitos(num2);

    if(digitos1 > digitos2) {
        printf("El primer número tiene más dígitos que el segundo.\n");
    } else if(digitos2 > digitos1) {
        printf("El segundo número tiene más dígitos que el primero.\n");
    } else {
        printf("Los dos números tienen la misma cantidad de dígitos.\n");
    }

    return 0;
}
