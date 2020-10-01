#include<stdio.h>
int main()
{
    char ch,a[100];
    int count=0;
    printf("Enter a string :");
    gets(a);
    printf("\nEnter a character :");
    scanf("%c",&ch);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==ch)
        count++;
    }
    printf("\n%c found %d times in %s",ch,count,a);
}


// Enter a string :Shekhar kumar

// Enter a character :k

// k found 2 times in Shekhar kumar