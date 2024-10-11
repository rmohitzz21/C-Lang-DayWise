// 1. Write a C program to create a structure for student and store the following details : (name,course,year,gender,Marks of three subjects)
// calculate total marks and percentage.


#include <stdio.h>


struct std
{
    char name[10];
    char course[10];
    int year;
    int m1;
    int m2;
    int m3;
} s1[3];

void main()
{

    int i,total[3];
    for (i = 0; i < 3; i++)
    {
        printf("Enter Name:");
        scanf("%s", &s1[i].name);
        printf("\nEnter Course Name:");
        scanf("%s", &s1[i].course);
        printf("\nEnter year:");
        scanf("%d", &s1[i].year);
        printf("\nEnter Marks 1:");
        scanf("%d", &s1[i].m1);
        printf("\nEnter Marks 2:");
        scanf("%d", &s1[i].m2);
        printf("\nEnter Marks 3:");
        scanf("%d", &s1[i].m3);
        total[i] = s1[i].m1+ s1[i].m2+s1[i].m3;
        
    }

        
    for (i = 0; i < 3; i++)
    {
        printf("\nName is %s:", s1[i].name);
        printf("\nCourse Name %s:", s1[i].course);
        printf("\nYear is %d:", s1[i].year);
        printf("\n Marks1 %d:", s1[i].m1);
        printf("\n Marks2 %d:", s1[i].m2);
        printf("\n Marks3 %d:", s1[i].m3);
        printf("\n Total is %d",total[i]);
    }

    
}
