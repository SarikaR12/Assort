#include<stdio.h>

main()
{
	int i,n,max1,max2;
	
	printf("Enter of Size = ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter value of Element = \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
		printf("Element of Array =");
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
		for(i=0;i<n;i++)
		{
			if(a[i]>max1)
			{
				max2=max1;
				max1=a[i];
			}
			else if(a[i]>max2 && a[i]<max1)
			{
				max2=a[i];
			}
		}
		printf("\nFirst largest num = %d ",max1);
		printf("\nSecond largest num = %d ",max2);
}