#include <stdio.h>


int main(){

int size=10;
 int arr[10]={7,9,2,10,1,0,42,2,4,11};

 for(int i=0;i<size;i++)
 {

    for(int j=0;j<size;j++)
    {

     if(arr[j]>arr[j+1])
     {
         int dummyVal=arr[j+1];
         arr[j+1]=arr[j];
         arr[j]=dummyVal;
     }   

    }

 }

 for(int k=0;k<size;k++)
 {
    printf("%d \n",arr[k]);
 }


return 0;

}

