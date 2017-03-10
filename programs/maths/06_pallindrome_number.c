#include<stdio.h>
#include<conio.h>

int main(){
    int number;
    char str1[10], str2[10];

    printf("Enter the number to check : ");
    scanf("%d", &number);

    // convert to string
    sprintf(str1, "%d", number);

    // copu the number
    strcpy(str2, str1);

    // reverse the string
    strrev(str2);

    if(!strcmp(str1, str2)){
        printf("Its Pallindrome !!");
    }else{
        printf("Not a Pallindrome !!");
    }
}
