#include<stdio.h>
#include<conio.h>

int fact(int);

int main(){
   int number;
   int factorial;

   printf("Enter number to be used to calculate factorial : ");
   scanf("%d", &number);
   factorial = fact(5);
   printf("Factorial calculated is %d", factorial);
}

int fact(int num){
    if (num == 0){
        return 1;
    }
    return num*fact(num-1);
}

