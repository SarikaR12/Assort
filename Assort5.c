#include<stdio.h>

main()
{
	int i,j,r,c;
	
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
	printf("Element of Transpose Matrix = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    printf("%d ",a[i][j]);	
		}
		printf("\n");
	}
}