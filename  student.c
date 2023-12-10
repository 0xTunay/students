#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[30];
    int age;
    float gpa;
};

void printStudent(struct Student student)
{
    printf("Name : %s\n", student.name);
    printf("age: %d\n", student.age);
    printf("gpa: %.2f\n ", student.gpa);
}

int main(){
    int numStudents = 3;
    struct Student *students = (struct Student*)malloc(numStudents * sizeof (struct Student));


    for(int i = 0;i < numStudents;++i)
    {
        printf("Information for student: %d\n", i+1);
        printf("name\n");
        scanf("%s",students[i].name);
        printf("age? ");
        scanf("%d",&students[i].age);
        printf("gpa?");
        scanf("%f",&students[i].gpa);
    }
}