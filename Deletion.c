#include <stdio.h>

void deleteArr(int arr[],int size, int index){

   for(int i=index;i<size;i++){
    
       arr[i]=arr[i+1];
   }
    
}

void printArr(int arr[],int size){
     
     for(int i=0;i<size;i++)
     {
         printf("%d \n",arr[i]);
     }

}

int main(){
    int arr[]={2,4,5,1,8,9};
    deleteArr(arr,6,3);
    printArr(arr,8);
    return 0;
}