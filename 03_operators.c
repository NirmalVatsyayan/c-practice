#include<stdio.h>
#include<conio.h>

int main(){
    int i = 100;
    int j = 200;
    int result;

    //arithmetic operations
    result = i + j;
    printf("Sum : %d\n\n",result);

    result = i - j;
    printf("Difference : %d\n\n",result);

    result = i*j;
    printf("Multiplication : %d\n\n",result);

    result = i/j;
    printf("Division : %d\n\n",result);

    result = i%j;
    printf("Remainder :%d\n\n",result);

    i++;
    printf("Incremented i is : %d\n\n",i);

    i--;
    printf("Decremented i is :%d\n\n", i);

    /*
    1 = true
    0 = false
    */
    //relational operators
    printf("Equals %d\n\n",i==j);
    printf("Not Equals %d\n\n",i!=j);
    printf("Greater than %d\n\n",i>j);
    printf("Less than %d\n\n",i<j);
    printf("Greater than or equals %d\n\n",i>=j);
    printf("Less than or equals %d\n\n",i<=j);


    //logical operators
    printf("Logical AND %d\n\n",i&&j);
    printf("Logical OR %d\n\n",i||j);
    printf("Logical NOT %d\n\n",!i);

    //Bitwise operators
    printf("Bitwise AND %d\n\n",i&j);
    printf("Bitwise OR %d\n\n",i|j);
    printf("Bitwise EX-OR %d\n\n",i^j);
    printf("Bitwise LEFT SHIFT %d\n\n",i<<1);
    printf("Bitwise RIGHT SHIFT %d\n\n",i>>1);

    // sizeof

    printf("SIZE OF i is %d",sizeof(i));
}

