#include<stdio.h>
#include<conio.h>

int main(){
   int a = 10;
   int b = 20;

   int *c = &a;
   int *d = &b;

   printf("Before swapping a -> %d , b -> %d\n", a, b);

   *c = *c + *d;
   *d = *c - *d;
   *c = *c - *d;

   printf("After swapping a -> %d , b -> %d\n", a, b);
}
