#include<stdio.h>
#include<conio.h>

void incr(){
   static int i;
   printf("%d\n",i++);
}

int main(){
    incr();
    incr();
}
