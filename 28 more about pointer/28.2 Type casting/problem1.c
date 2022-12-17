#include<stdio.h>

int main()
{
    int a=7;
    int* pi;
    double* pd;
    double b=8.65;
    pi=&a;
    pd=(double*)pi;

    printf("%d %lf\n", a, b);
    printf("%p %p\n", pi, pd);
    return 0;
}