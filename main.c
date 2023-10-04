#include <stdio.h>

int main() {
int numero;
int esprimo;
int cuenta;

    printf("Bienvenido a la calculadora de numeros primos\n");
    printf("Inserte un numero entero\n");
    scanf("%d", &numero);

        if (numero <= 1) {
        printf("No es un numero primo\n", numero);
    } else {
        for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
        esprimo = 0;
    break;
}
}

    if (esprimo) {
        printf("Si es un numero primo.\n", numero);
    } else {
        printf("No es un numero primo.\n", numero);
    }
}

return 0;
}