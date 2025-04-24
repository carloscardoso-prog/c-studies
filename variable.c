#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[] = "Carlos";
    char primeiraLetraNome = 'C';
    int idade = 24;
    double idadeFracionada = 24.2;
    const int CONSTANTE = 123;    
    printf("Meu nome é: %s \n", nome);
    printf("Primeira letra do nome é: %c \n", primeiraLetraNome);
    printf("Minha idade é: %d \n", idade);
    printf("Minha idade fracionada é: %f \n", idadeFracionada);
    printf("%f\n", 0.1 +  0.2);
    // CONSTANTE = 3;
    printf("%d\n", CONSTANTE);

    return 0;
}