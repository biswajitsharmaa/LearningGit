#include<stdio.h>
int main()
{
	int arr[20], n,i,j;
	int min = 1000;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=0 ;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n-2;i++)
		if(arr[i]+arr[i+1] < min)
			min=arr[i]+arr[i+1];
		if(arr[i]+arr[i+2] < min)
                        min=arr[i]+arr[i+2];
	printf("Min time is %d",min);

	return 0;
}
