#include<stdio.h>
#include<conio.h>

struct Team{
   char *name;
   int size;
   char game[20];
};

int main(){
   struct Team *stptr;
   struct Team st = {"India", 11, "Dhoni"};

   stptr = &st;

   printf("%s\n\n",stptr->name);
   printf("%d\n\n",stptr->size);
   printf("%s\n\n",stptr->game);

   stptr->name = "Blah";
   stptr->size = 100;
   strcpy(stptr->game, "Blah1");

   printf("%s\n\n",stptr->name);
   printf("%d\n\n",stptr->size);
   printf("%s\n\n",stptr->game);
}
