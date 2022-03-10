#include <stdio.h>

int main(){
   
 int age;
 printf("Enter your age \n");
 scanf("%d",&age);
 if(age>25)
 {
     printf("You can drive \n");
 }
else if(age>17 && age<25)
{
    printf("You can drive but carefully");
}
 else {
     printf("You cannot drive \n");
 }


    return 0;
}