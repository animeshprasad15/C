#include<stdio.h>
void sum_even(int i,int *se)
{
    *se=*se+i;
}
void sum_odd(int i,int *so)
{
    *so=*so+i;
}
int main()
{
    int n,se=0,so=0;
    printf("Enter n term of the series :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        sum_even(i,&se);
        else
        sum_odd(i,&so);
    }
    printf("Sum of even number is %d\n",se);
    printf("Sum of odd number is %d",so);
}