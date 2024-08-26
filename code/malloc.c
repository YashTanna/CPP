#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    printf("Enter size of arry\n");
    scanf("%d",&size);
    int * ptr;
    ptr = (int *)malloc(sizeof(int)*size);

    if(ptr == NULL)
    {
        printf("Memory cannot be allocated\n");
        exit(0);
    }

    // printf("Enter %d number\n",size);
    // for(int i=0;i<size;i++)
    // {
    //     scanf("%d",&ptr[i]);
    // }

    printf("The number you have entered is as Below\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",ptr[i]);
    }

    free(ptr);
    return 0;
}