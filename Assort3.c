#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter of size = ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter value of Element = \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Element of Array = ");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n Rotate Element are = ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}