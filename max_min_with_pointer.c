#include<stdio.h>
void max_min(int a,int b,int c,int *min,int *max)
{
    *max=(a>b && a>c)?a:(b>c?b:c);
    *min=(a<b && a<c)?a:(b<c?b:c);
}
int main()
{
    int a,b,c,min,max;
    printf("Enter 3 number :");
    scanf("%d%d%d",&a,&b,&c);
    max_min(a,b,c,&min,&max);
    printf("\nMaximum value is %d \nMinimum value is %d",max,min);
}
// Enter 3 number :15
// 26
// 98

// Maximum value is 98
// Minimum value is 15