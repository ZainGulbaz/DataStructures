#include <stdio.h>
#include<stdlib.h>
int main()
{
     int* ptr= NULL;
     ptr= (int*) malloc(3* sizeof(int));
     
    

     for(int i=0; i<3;i++)
     {
         printf("%d \n",ptr[i]);
     }




}