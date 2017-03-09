#include<stdio.h>
#include<conio.h>

int main(){
   int *marks, length, counter;
   puts("Enter the number of subjects : ");
   scanf("%d", &length);

   marks = (int *)calloc(length, sizeof(int));
   printf("\n");
   if (marks == NULL){
        puts("Unable to allocate memory !!\n");
   }else{
       for(counter = 0; counter < length; counter++){
            printf("Enter the marks of %d subject : \n", counter+1);
            scanf("%d", &marks[counter]);
       }
       for(counter=0; counter< length; counter++){
            printf("%d\n",marks[counter]);
       }
       free(marks);
   }

}
