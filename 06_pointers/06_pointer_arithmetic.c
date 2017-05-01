#include<stdio.h>
#include<conio.h>

int main(){
    int number = 50;
    int *p;
    p = &number;

     /*
     increment and addition
     */
    printf("Before increment : Address of p variable is %u \n",p);
    p = p+1;
    printf("After increment : Address of p variable is %u \n\n",p);

    printf("Before addition : Address of p variable is %u \n",p);
    p = p+5;
    printf("After addition : Address of p variable is %u \n\n",p);

    /*
    decrement and substraction
    */
    printf("Before decrement : Address of p variable is %u \n",p);
    p = p-1;
    printf("After decrement : Address of p variable is %u \n\n",p);

    printf("Before substraction : Address of p variable is %u \n",p);
    p = p-5;
    printf("After substraction : Address of p variable is %u \n\n",p);

}
