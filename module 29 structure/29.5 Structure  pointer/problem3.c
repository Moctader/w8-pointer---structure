#include<stdio.h>

struct student
{
    double weigth;
    int roll;
    int age;
};

int main()
{
    struct student s={.roll=12, .weigth=85.2, .age=34};
    struct student* sp;
    sp=&s;

    // print in structure with the help of the pointer
    printf("%d %lf %d\n", sp->roll, sp->weigth, sp->age);
    return 0;
}