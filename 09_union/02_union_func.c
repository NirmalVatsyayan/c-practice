#include<stdio.h>
#include<conio.h>

union Data{
  int x;
};

void display(union Data d);
void display1(union Data *d);

int main(){

   union Data d;
   d.x = 100;
   display(d);
   display1(&d);

}

void display(union Data d){
   printf("%d\n", d.x);
}

void display1(union Data *d){
   printf("%d\n", d->x);
}
