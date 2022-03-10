#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int size;
    int *ptr;
} myarray;



void setArray(struct myArray arr, int size)
{

    arr.size = size;
    arr.ptr = (int*) malloc(size*sizeof(int));
    arr.ptr[0]=2;
    arr.ptr[1]=3;
    for (int i=0; i<2;i++)
    {
        printf("%d \n",arr.ptr[i]);
    }
}

int main()
{
    struct myArray arr;
    setArray(arr, 2);


    return 0;
}