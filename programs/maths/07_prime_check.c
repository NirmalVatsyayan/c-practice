#include<stdio.h>
#include<conio.h>

int main(){
    int number;
    int i=2;
    int count=0;

    printf("Enter a number to check prime : ");
    scanf("%d",&number);

    if (number == 0){
        printf("Neither Prime not composite !!");
    }else if (number ==1){
        printf("Its prime !!");
    }else{
        for(;i<number/2; i++){
            if (number%i == 0){
                count++;
            }
        }

        if (count == 0){
            printf("Its prime !!");
        }else{
            printf("Not a prime !!");
        }
    }

}
