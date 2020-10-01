#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i;
    printf("Enter a string :");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(i==0)
        {
            if(a[i]>='a' && a[i]<='z')
            a[i]-=32;
        }
        if(a[i]==' ')
        {
            if(a[i+1]>='a' && a[i+1]<='z')
            {
                a[i+1]-=32;
            }
            else if(a[i]>='A' && a[i]<='Z')
            {
                a[i]+=32;
            }
        }
    }
    printf("\nYour String :%s",a);
}
// Enter a string :wefsjsdbk sadjhwur wehfff

// Your String :Wefsjsdbk Sadjhwur Wehfff
