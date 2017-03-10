#include<stdio.h>
#include<conio.h>

int main(){

    int number;
    int sum=0;
    int rem;
    int tmp;

    printf("Enter a number to check : ");
    scanf("%d", &number);
    tmp = number;

    while(number != 0){
        rem = number % 10;
        sum = sum + (rem*rem*rem);
        number = number/10;
    }

    number = tmp;

    if (sum == number){
        printf("Its an Armstrong Number !!");
    }else{
        printf("Not an Armstrong Number !!");
    }

}
