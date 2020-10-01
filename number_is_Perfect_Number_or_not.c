#include<stdio.h>
int main()
{
    int n,s=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        s+=i;
    }
    if(n==s)
    printf("\nGiven number is perfect number");
    else
    {
        printf("\nGiven number is not perfact number");
    }
    
}
// Enter a number :496

// Given number is perfect number