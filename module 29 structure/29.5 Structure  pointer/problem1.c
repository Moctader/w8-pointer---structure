#include<stdio.h>

struct student
{
    double weigth;
    int roll;
};

int main()
{
    struct student s={.roll=12, .weigth=85.2};
    struct student s2={.roll=13, .weigth=82.2};
    struct student* sp;
    sp=&s;
    //size of struct
    printf("%d\n", sizeof(struct student));
    printf("%p\n%p\n",sp, &s2);

    return 0;
}