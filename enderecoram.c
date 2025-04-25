#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a,b,c;

    a = 10;
    b = 20;
    c = 30;

    printf("Memórias: A = %p, B = %p, C = %p\n", &a, &b, &c);

    int * pA = &a;

    printf("%p\n", pA);
    printf("%d\n", *pA);

    return 0;
}