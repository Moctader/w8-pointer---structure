#include<stdio.h>

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
    struct student s={12,"My name",24,75.6};
    printf("roll = %d\name = %s\nnage = %d\nweight = %f", s.roll,s.name, s.age, s.weight);

    a=7;
    return 0;
}