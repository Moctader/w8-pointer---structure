#include<stdio.h>
#include<string.h>

struct student
{
    int roll; 
    char name[50];
    int age;
    float weight;
};



int main()
{
    int ara[10];
    int a;
    char dest[10];
    struct student s1={12,"name1",24, 75.6};
    struct student s2={12,"name 2",24, 75.6};
 
    
    printf("steudent 1 info:\n");
    printf("roll = %d\nname=%s\nage = %d\nweight = %f\n\n", s1.roll,s1.name,s1.age, s1.weight);
    printf("steudent 2 info:\n");
    printf("roll = %d\nname=%s\nnge = %d\nweight = %f\n\n", s2.roll,s2.name,s2.age, s2.weight);


    a=7;
    return 0;
}