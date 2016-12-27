#include<stdio.h>
#include<conio.h>

//signatures
int alterValue(int data);   //call by value
int alterValuePlease(int *data); // call by reference

int main(){
   int data = 100;

   printf("Value of data before calling alterValue is %d\n\n",data);
   alterValue(data);
   printf("Value of data after calling alterValue is %d\n\n",data);

   printf("Value of data before calling alterValuePlease is %d\n\n",data);
   alterValuePlease(&data); // passing address of variable
   printf("Value of data after calling alterValuePlease is %d\n\n",data);
}

int alterValue(int data){
  data = data + 100;
}

int alterValuePlease(int *data){
   *data = *data + 100;
}
