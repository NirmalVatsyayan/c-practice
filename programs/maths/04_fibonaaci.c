#include<stdio.h>
#include<conio.h>

int main(){
    int a =0;
    int b =1;
    int next;

    int index = 0;
    int numseries;

    printf("Enter number of fibonacci series to geterate : \n");
    scanf("%d", &numseries);

    for(; index<numseries; index++){
        if (index == 0){
            printf("%d\t", a);
        }else if (index == 1){
            printf("%d\t", b);
        }else{
            next = a + b;
            a = b;
            b = next;
            printf("%d\t", next);
        }

    }

}
