#include<stdio.h>
#include<conio.h>

struct Student
{
 char name[20];
 int age;
 int rollno;
};


int main(){
   struct Student st = {"nirmal", 26, 64};
   printf(st.name);
   printf(st.age);
   printf(st.rollno);
}
