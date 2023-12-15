#include<stdio.h>

main()
{
	int i,j,r,c,sum=0;
	
	printf("Enter of Row size = ");
	scanf("%d",&r);
	printf("Enter of column size = ");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf("Enter value of Element = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("a[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Element Of The Matrix = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Sum Of The Diagonal Elements = ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
   	printf("%d",sum);
}