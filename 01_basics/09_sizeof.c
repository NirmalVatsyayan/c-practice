#include<stdio.h>
#include<conio.h>

struct Data{
   int x;
   char y[10];
}d;

int main(){
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(long));

    int data[10];
    printf("%d\n", sizeof(data));

    printf("%d\n", sizeof(d));
}
