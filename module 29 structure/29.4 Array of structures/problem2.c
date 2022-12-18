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
    int i;
    struct student s[10];

    for(i=0; i<10; i++)
    {
        s[i].roll=11+i;
        s[i].weight=65.9+i*3;
    }
    for(i=0; i<10; i++)
    {
        printf("%d  %lf\n", s[i].roll,s[i].weight);
    }
    return 0;
}