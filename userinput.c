#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is %d", age);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f", gpa);

    char name[20];
    printf("Enter your name: ");
    // scanf("%s", &name); pega só o primeiro nome, para em qualquer espaço
    fgets(name, 20, stdin); // string, tamanho da string, e standard input por que vem do teclado
    printf("Your name is %s", name);

    return 0;
}