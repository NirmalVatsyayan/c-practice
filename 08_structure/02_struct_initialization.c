#include<stdio.h>
#include<conio.h>

struct Places {
   char name[100];
   int flight_ticket;
};

int main(){
   // initialization
   struct Places p = {"Timbaktu", 1000};

   printf("p : %s\n",p.name);
   printf("p : %d\n",p.flight_ticket);

}
