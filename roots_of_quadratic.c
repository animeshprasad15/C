#include<stdio.h>
#include<math.h>
void quad(int a,int b,int c,float *x1,float *x2)
{
    float d;
    d=b*b-4*a*c;
    if(d<0)
    printf("Real root is not found.");
    else
    {
        *x1=(-b+sqrt(d))/2*a;
        *x2=(-b-sqrt(d))/2*a;
    }
}
int main()
{
    int a,b,c;
    float x1,x2;
    printf("Enter a,b,c in quadratic :");
    scanf("%d%d%d",&a,&b,&c);
    quad(a,b,c,&x1,&x2);
    printf("\nRoot of Quadratic is %.2f and %.2f ",x1,x2);
}