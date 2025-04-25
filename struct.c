#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct Student {
        int age;
        double height;
        char name[20];
        char surname[20];
    };

    struct Student Student1; 
    Student1.age = 24;
    Student1.height = 1.64;
    strcpy(Student1.name, "Carlos");
    strcpy(Student1.surname, "Cardoso");

    printf(Student1.name);
}