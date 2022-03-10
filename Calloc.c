#include <stdio.h>
#include <stdlib.h>

int main()
{
   int* ptr=NULL;

   ptr = (int*) calloc(3,sizeof(int));

   for (int i=0;i<3;i++)
   {
       printf("Enter the value of the integer \n");
       scanf("%d",&ptr[i]);
   }

   for (int j=0; j<3;j++)
   {
       printf("%d \n",ptr[j]);
   }

    return 0;
}