#include <stdio.h>
#include <stdlib.h>
int main()
{

    int* ptr=NULL;
    ptr= (int* ) malloc(3*sizeof(int));

    for (int i=0; i<3 ;i++)
    {
         printf("Enter the value of the Array");
          scanf("%d",&ptr[i]);

    }
    for (int i=0; i<3; i++)
    {
        printf("The value of the array is %d",ptr[i]);
    }

    return 0;
}