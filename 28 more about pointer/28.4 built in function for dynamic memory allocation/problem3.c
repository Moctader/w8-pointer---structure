#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n , i;
    int ara[10];
    scanf("%d", &n);
    int* ptr;
    // Dynamic memory allocation used by calloc
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed");
    }
    free(ptr);
    return 0;
}