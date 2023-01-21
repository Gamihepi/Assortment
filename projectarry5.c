#include<stdio.h>
main()
{
	int i,j,m,n,a[10][10],b[10][10],sum[10][10];
	printf("Enter the number of row element=");
	scanf("%d",&m);
	printf("Enter the number of colum element=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		
		printf("b[%d][%d]=",i,j);
		scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			
		}
		
	}
	printf("Sum of two matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",sum[i][j]);
			if(j==m-1)
			{
				printf("\n");
			}
			
		}
	}

	
}
