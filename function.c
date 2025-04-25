#include <stdio.h>
#include <stdlib.h>

void funcaoNome(char nome[]);
int main()
{
    funcaoNome("Carlos Silva");
    return 0;
}

void funcaoNome(char nome[])
{
    printf("%s", nome);
}