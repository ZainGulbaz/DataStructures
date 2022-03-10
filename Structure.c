#include <stdio.h>
#include <string.h>
//Structure is like the classes but include no integer
struct Books{
    char name[20];
    int price;
} book;

void printBook(struct Books bk)
{
    printf("Author name is %s \n",bk.name);
    printf("Price of Book is %d \n",bk.price);
}
int main(){
 
   struct Books bk1;
   strcpy(bk1.name,"Denis Herdie");
   bk1.price=70;
   printBook(bk1);

    return 0;
}