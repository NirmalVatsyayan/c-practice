#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

     div_t n;
     n = div(10,3);

     printf("The quotient is %d\nThe reminder is %d", n.quot, n.rem);

}
