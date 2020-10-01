#include<stdio.h>
enum day {sun=1,mon,tue,wed,thu,fri,sat};
int main()
{
    enum day d;
    printf("Enter a number :");
    scanf("%d",&d);
    if(sun==d || sat==d)
    printf("\nWeekend");
    else
    printf("\nWorking Day");
}
// Enter a number :1

// Weekend