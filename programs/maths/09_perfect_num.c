#include<stdio.h>
#include<conio.h>

int main(){

    int index=1;
    int sum = 0;
    int number;
    printf("Enter number to check : ");
    scanf("%d", &number);

    while(index<number){
        if(number % index == 0){
            sum = sum + index;
        }
        index++;
    }

    if(sum == number){
        printf("Its a perfect number !!");
    }else{
        printf("Its not a perfect number !!");
    }

}
