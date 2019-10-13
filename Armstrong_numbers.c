#include<stdio.h>
#include<math.h>

int countDigits(int x)
{
    int c=0;
    while(x)
    {
        x/=10;
        c++;
    }
    return c;
}

void fun(int n)
{
    int sum=0,r,l;
    l=n;
    int ex=countDigits(n);
    while(l>0)
    {
        r=l%10;
        sum+=pow(r,ex);    //an armstrong number is a n digit number (say x) whose digits when raised to power n (and not 3 always as you did) and summed equals x.
        l=l/10;
    }
    if(sum==n)
    printf("%d\t",n);
}
int main()
{
    int n;
    printf("Enter a number :");    //Find the Armstrong numbers upto n number (you can now enter values even greater than 999)
    scanf("%d",&n);               
    for(int i=1;i<=n;i++)
        fun(i);
}
// Enter a number :1000
// 1       153     370     371     407
