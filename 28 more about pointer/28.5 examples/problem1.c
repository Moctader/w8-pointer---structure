#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    n=5;
    //dynamic memory allocation for 5 elements

    int *ptr;
    ptr=(int*)malloc(n*sizeof(int));
    printf("%p\n", ptr);

    if(ptr==NULL)
    {
        printf("memory allocation failed. \n");
    }
    else
    {
        for(i=0; i<n; i++)
        {
            scanf("%d", (ptr+i));
        }

        for(i=0; i<n; i++)
        {
            printf("%d, ", *(ptr+i));
        }

    }

    //reallocation for the n =10
    n=10;
    ptr=realloc(ptr, n*sizeof(int));
    printf("%p\n", ptr);

    if(ptr==NULL)
    {
        printf("memory allocation failed. \n");
    }
    else
    {
        for(i=5; i<n; i++)
        {
            scanf("%d", (ptr+i));
        }

        for(i=0; i<n; i++)
        {
            printf("%d, ", *(ptr+i));
        }

    }
    free(ptr);


    return 0;
}