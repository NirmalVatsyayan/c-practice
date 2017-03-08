#include<stdio.h>
#include<conio.h>

struct Student{
   char name[20];
   int roll_number;
};

void display(struct Student *);

int main(){
   struct Student nirmal = {"Nirmal", 1};
   display(&nirmal);

}

void display(struct Student *ptr){
    printf("%s\n\n", ptr->name);
    printf("%d", ptr->roll_number);
}

