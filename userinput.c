#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);
    printf("Your age is %d\n", age);

    double gpa;
    printf("Enter your gpa: \n");
    scanf("%lf", &gpa);
    printf("Your gpa is %f\n", gpa);

    getchar(); // limpa o buffer, por que o \n fica na entrada e não é consumido no scanf.
    char name[20];
    printf("Enter your name: \n");
    // scanf("%s", &name); pega só o primeiro nome, para em qualquer espaço
    fgets(name, 20, stdin); // string, tamanho da string, e standard input por que vem do teclado
    printf("Your name is %s", name);

    return 0;
}