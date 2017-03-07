#include<stdio.h>
#include<conio.h>

int main(){
    int x = 10;

    int *y;
    int **z;

    y = &x;
    z = &y;

    printf("%d\n",x);
    printf("%d\n",*y);
    printf("%d\n",**z);

    printf("\n\n");

    printf("x is x->%d\n\n",x);
    printf("address of x is &x->%p\n\n",&x);
    printf("Value of x is *&x->%d\n\n",*&x);

    printf("y is y->%p\n\n",y);
    printf("address of y is &y->%p\n\n",&y);
    printf("*y is *y->%d\n\n",*y);

    printf("z is z>%p\n\n",z);
    printf("address of z is &z->%p\n\n",&z);
    printf("*z is *z->%p\n\n",*z);
    printf("**z is **z->%d",**z);

}
