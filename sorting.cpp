#include<stdio.h>
int main()
{
	int i,j,a[100],n,min;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the element of array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	a[min]=a[i];
	for(j=i+1;j<n-1;i++)
  {		
	if(min!=i)
	{
		printf("sorted array is\n");
		for(i=0;i<n;i++)
				printf("%d",a[i]);
	}
	return 0;
  }
}

