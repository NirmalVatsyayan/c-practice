#include<stdio.h>
#include<conio.h>

int main(){
   int age=10;
   int x;

   age>=18?printf("You are adult\n"):printf("You are not adult\n");
   x = (age>=18)?1:0;
   printf("%d",x);
}
