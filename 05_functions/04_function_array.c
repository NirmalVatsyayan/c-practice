#include<stdio.h>
#include<conio.h>

void display(int [], int);

int main(){
    int marks[5] = {100, 99, 98, 97, 96};
    display(marks, 5);

}

void display(int marks[], int size){
  int counter;
  for (counter=0; counter<size; counter++){
      printf("Marks received : %d\n", marks[counter]);
  }
}
