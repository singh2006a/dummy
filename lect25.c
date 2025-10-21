#include<stdio.h>
struct student{
    char name[10];
    int rollno[10];
    float marks;
};

     int main(){

         struct student s1[5];
         for(int i=0; i<5; i++) {

            printf("enter your name ");
            scanf("%s", s1[i].name);

            printf("enter rollno ");
            scanf("%d", s1[i].rollno);

            printf("enter your marks");
            scanf("%f", s1[i].marks);
         }
     }