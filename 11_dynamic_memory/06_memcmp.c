#include<stdio.h>
#include<conio.h>

int main(){
    int length, lens1, lens2, result;

    char str1[] = "Nirmal";
    char str2[] = "Nirmal";

    lens1 = strlen(str1);
    lens2 = strlen(str2);

    length = lens1<=lens2?lens1:lens2;

    result = memcmp(str1, str2, length);

    if (result == 0){
        printf("First %d characters are equal in str1 and str2", length);
    }
}
