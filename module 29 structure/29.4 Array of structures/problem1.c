//Array of structure

#include<stdio.h>

struct student
{
    /* 
    Bigger size memorey should be on top for memory space reduce here like double
    on top pf int because of double has 8 byte memory space where int has only 4.
    */  
    double weight;
    int roll;
    
};


int main()
{
    struct student s[10];

    /*
    Memory allocation check
    printf("%d\n%d", sizeof(int), sizeof(double));
    printf("%lu\n%lu", sizeof(int), sizeof(double));
    */

   s[0].roll=11;
   s[0].weight=65.9;

   s[1].roll=16;
   s[1].weight=75.9;

   s[2].roll=19;
   s[2].weight=85.9;


    return 0;
}