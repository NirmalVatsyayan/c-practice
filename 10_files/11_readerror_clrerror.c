#include<stdio.h>
#include<conio.h>

int main(){
    int status;
    char data[20] = "Nirmal Vatsyayan";

    FILE *fp;

    fp = fopen("example.txt","r");
    if (fp != NULL){
        fprintf(fp, "%s", data);
        status = ferror(fp);
        printf("%d\n",status);

        clearerr(fp);

        status = ferror(fp);
        printf("%d\n",status);

        if (status == 0){
            puts("No read/write errors");
        }else{
            puts("Read/ Write error occured");
        }

    }else{
       puts("Error in opening file !!");
    }
}
