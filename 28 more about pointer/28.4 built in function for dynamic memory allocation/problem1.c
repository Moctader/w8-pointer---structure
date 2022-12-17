#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n , i;
    int ara[10];
    scanf("%d", &n);
    int* ptr;
    // Dynamic memory allocation used by calloc
    ptr=(int*)calloc(n, sizeof(int));

    //pointer used for the array input in a run time
    for(i=0; i<n; i++)
    {
        scanf("%d",(ptr+i));
    }
    //print the array
    for(i=0; i<n; i++)
    {
        printf("%d---->%d\n",i, *(ptr+i));
    }
    free(ptr);
    return 0;
}