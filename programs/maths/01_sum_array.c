#include<stdio.h>
#include<conio.h>

int calc_sum(int *, int);

int main(){

   int len_array;
   int index;
   int sum;

   printf("Enter number of variables to enter : ");
   scanf("%d", &len_array);

   int data[len_array];

   for (index=0; index<len_array; index++){
       printf("Enter data no. %d : ", index+1);
       scanf("%d", &data[index]);
   }

   sum = calc_sum(data, len_array);
   printf("Sum is %d", sum);
}


int calc_sum(int *arr, int len){
    int s = 0;
    int i;

    for(i=0; i<len; i++){
        s = s + *arr;
        arr++;
    }
    return s;
}
