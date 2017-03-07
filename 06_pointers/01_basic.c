#include<stdio.h>
#include<conio.h>

int main(){
    int x = 10;

    int *y;
    y = &x;

    printf("x is x->%d\n\n",x);
    printf("address of x is &x->%p\n\n",&x);
    printf("Value of x is *&x->%d\n\n",*&x);
    printf("y is y->%p\n\n",y);
    printf("*y is *y->%d\n\n",*y);


}
