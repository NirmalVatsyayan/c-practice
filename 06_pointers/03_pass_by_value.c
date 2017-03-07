#include<stdio.h>
#include<conio.h>

void display(int, int);

int main(){
    int x,y;

    x = 10;
    y = 20;
    printf("Before function call : x is %d, y is %d\n\n", x,y);
    display(x, y);
    printf("After function call : x is %d, y is %d\n\n", x,y);
}

void display(int a, int b){
    printf("Before change : a is %d, b is %d\n\n", a,b);

    a = 100;
    b = 200;

    printf("After change : a is %d, b is %d\n\n", a,b);
}
