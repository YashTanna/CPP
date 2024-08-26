#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *ptr;
    ptr = (char *)calloc(10,1);
    strcpy(ptr,"yashtanna");
    printf("%s\n",ptr);
    ptr = realloc(ptr,5);
    printf("%s\n",ptr);
    strcpy(ptr,"yash");
    printf("%s\n",ptr);
    return 0;
}