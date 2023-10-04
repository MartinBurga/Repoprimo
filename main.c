#include <stdio.h>
int numero;
int primo;
int cuenta;
int main() {
    
    printf("Bienvenido a la calculadora de numeros primos\n");
    printf("Inserte un numero entero\n");
    scanf ("%d", numero);
    
    if (numero==1 || numero==0)
    {
        printf("El numero 1 y 0 no son numeros primos");
    }

    for (numero= 2 <= 100 ; i++)
    {
        primo=1;
        cuenta=2;

        while (cuenta <= numero / 2 && primo)
        {
            if (numero % cuenta = 0 )
                primo = 0;

            cuenta++;
        }
    }

    return 0;
}