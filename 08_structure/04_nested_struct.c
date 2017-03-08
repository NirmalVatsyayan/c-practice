#include<stdio.h>
#include<conio.h>

struct student
{
  char name[30];
  int age;
  struct address
  {
     char locality[30];
     char city[30];
     int pincode;
  }s1;
};

int main(){
    struct student st;
    strcpy(st.name, "Nirmal");
    st.age = 27;

    strcpy(st.s1.locality,"Bihar");
    strcpy(st.s1.city,"Darbhanga");
    st.s1.pincode = 846004;

    printf("%s\n", st.name);
    printf("%d\n", st.age);
    printf("%s\n", st.s1.locality);
    printf("%s\n", st.s1.city);
    printf("%d\n", st.s1.pincode);
}
