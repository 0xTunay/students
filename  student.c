#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[30];
    int age;
    float gpa;
}Students;

void printStudent(Students student)
{
    printf("Name : %s\n", student.name);
    printf("age: %d\n", student.age);
    printf("gpa: %.2f\n ", student.gpa);
}

int main(){
    int numStudents = 3;
    Students *students = (Students*)malloc(numStudents * sizeof (Students));


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
        printf("\ninframtion about students: \n");
    for(int i =0; i < numStudents;++i){
        printStudent(students[i]);
        printf("\n");
    }

    FILE *file = fopen("students.txt","w");
    if( file != NULL)
    {
        for (int i =0; i<numStudents; ++i){
            fprintf(file,"%s %d %.2f\n",students[i].name, students[i].age,students[i].gpa);
        }
        fclose(file);
        printf("записано в students.txt\n");
    } else {
        printf("Error \n");
    }

    free(students);
    return 0;
}