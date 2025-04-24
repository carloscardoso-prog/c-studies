#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char nome1[20];
    char nome2[20];

    printf("Primeiro valor: ");
    scanf("%lf", &num1);
    printf("Segundo valor: ");
    scanf("%lf", &num2);
    printf("Pra contexto, qual seu nome? ");
    scanf("%s%s", nome1, nome2);

    printf("Valor final: %f \n", num1+num2);
    printf("Nome do caba: %s %s", nome1, nome2);

    return 0;
}