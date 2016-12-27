#include<stdio.h>
#include<conio.h>
int sum(int val1, int val2); //function declaration, usually done in header files

int main(){
    int data1 = 10;
    int data2 = 100;
    int sum1 = sum(data1, data2);
    printf("Sum is : %d",sum1);
}


//function definition
int sum(int val1, int val2){
  int sum = val1 + val2;
  return sum;
}
