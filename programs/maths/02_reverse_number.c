#include<stdio.h>
#include<conio.h>
#include<math.h>

/*
number = 112
len = 3
mod = 10
rev = 0

i = 0
   rev = number *10 % mod = 2
   number = number / 10

will work

*/

int main(){
    int number;
    int rev = 0;

    int nDigits = 0;
    int index = 0;

    printf("Enter the number to be reversed : ");
    scanf("%d", &number);

    nDigits = floor(log10(abs(number))) + 1; // length of int digit enterd
    printf("Length of digits %d\n", nDigits);


    for(; index< nDigits; index++){
        rev = rev * 10 + number%10;
        number = number /10;
    }


    printf("Reverse output is %d", rev);
}
