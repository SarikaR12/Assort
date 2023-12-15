#include<stdio.h>

main()
{
	int i,j,r,c;
	
	printf("Enter of Row size = ");
	scanf("%d",&r);
	printf("Enter of column size = ");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],ans[r][c];
	
	printf("Enter value of first Element = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("a[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Enter value of second Element = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("a[%d][%d] = ",i,j);
		scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("Addition of Two matrix = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			ans[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    printf("%d ",ans[i][j]);	
		}
		printf("\n");
	}
}