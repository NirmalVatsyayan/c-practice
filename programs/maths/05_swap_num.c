#include<stdio.h>
#include<conio.h>

int main(){
    int first;
    int second;

    printf("Enter first number : ");
    scanf("%d", &first);
    printf("Enter second number : ");
    scanf("%d", &second);

    printf("Swapping .. \n\n");

    first = first + second;
    second = first - second;
    first = first - second;

    printf("First : %d\n", first);
    printf("Second : %d\n", second);

}
