#include <stdio.h>

int main(){

   char a[20],b[20];
   strcpy(a,"Zainaaaa");
   strcpy(b,"Zainaa");
//   strcat(a,b);

   printf("%d",strcmp(a,b)); //return greater if a>b neg if a<b and 0 if equal
    return 0;
}