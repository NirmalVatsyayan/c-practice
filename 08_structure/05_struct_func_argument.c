#include<stdio.h>
#include<conio.h>

struct student
{
  char name[10];
  int roll;
};

void show(struct student st);

void main()
{
  struct student std;
  printf("\nEnter student record\n");
  printf("\nstudent name\t");
  scanf("%s",std.name);
  printf("\nEnter student roll\t");
  scanf("%d",&std.roll);
  show(std);
  getch();
}

void show(struct student st)
{
  printf("\nstudent name is %s",st.name);
  printf("\nroll is %d",st.roll);
}
