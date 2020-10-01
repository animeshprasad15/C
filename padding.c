#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("\n0 padding number is %d",n);
    printf("\n1 padding number is %01d",n);
    printf("\n2 padding number is %02d",n);
    printf("\n3 padding number is %03d",n);
    printf("\n4 padding number is %04d",n);
}
// Enter a number :12

// 0 padding number is 12
// 1 padding number is 12
// 2 padding number is 12
// 3 padding number is 012
// 4 padding number is 0012