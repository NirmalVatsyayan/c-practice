#include<stdio.h>
#include<conio.h>

union Data{
  int x;
  char c;
};

int main(){

   union Data d;
   printf("%d\n",sizeof(d));

   d.x = 42;
   printf("%d\n",d.x);
   printf("%c\n",d.c); // garbage

   d.c = 'N';
   printf("%c\n",d.c);
   printf("%d\n",d.x); // garbage

}
