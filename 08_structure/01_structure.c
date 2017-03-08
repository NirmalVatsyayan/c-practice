#include<stdio.h>
#include<conio.h>

struct Book
{
 char name[20];
 int price;
 int pages;
} s; // struct variable


int main(){
   strcpy(s.name, "The book 1"); // could not assign
   s.price = 200;
   s.pages = 200;

   printf("S: %s\n",s.name);
   printf("S: %d\n",s.price);
   printf("S: %d\n",s.pages);

   //struct variable separately
   struct Book b1, b2;

   strcpy(b1.name, "The book 2");
   b1.price = 499;
   b2.pages = 1000;


   strcpy(b2.name, "The book 3");
   b2.price = 1999;
   b2.pages = 5100;

   printf("B1: %s\n", b1.name);
   printf("B1: %d\n", b1.price);
   printf("B1: %d\n", b1.pages);

   printf("B2: %s\n", b2.name);
   printf("B2: %d\n", b2.price);
   printf("B2: %d\n", b2.pages);

}
