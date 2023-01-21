#include<stdio.h>
main()
{
	int i,n;
	int array[100];
	printf("Enter the number of array=");
	scanf("%d",&n);
	printf("Enter the element=");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i]<0)
		{
			printf("All negative elements=%d\n",array[i]);
		}
	}
	printf("\n");
}

