#include<stdio.h>
int main()
{
    typedef char name[100];
    typedef int age;
    name n,c;
    age a;
    printf("Enter Name , City and age:");
    scanf("%s%s%d",n,c,&a);
    printf("\nName :%s\nCity :%s\nAge :%d",n,c,a);
}
// Enter Name , City and age:Shekhar 
// Gaya
// 19

// Name :Shekhar
// City :Gaya
// Age :19