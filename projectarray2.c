

#include <stdio.h>


 main()
{
    int arr[100], n, i;
    int max1, max2,min;
    printf("Enter the number of array=");
	scanf("%d",&n);
	printf("Enter the element=");
    for(i=0; i<n; i++)
    {
    	printf("a[%d]=",i);
        scanf("%d", &arr[i]);
    }
	 max1 = max2 = min;
    for(i=0; i<n; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
	
    printf("Second largest = %d", max2);
}


