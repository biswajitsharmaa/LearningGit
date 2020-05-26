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
		for(j=i+1;j<=i+2;j++)
			if(arr[i]+arr[j] < min)
				min=arr[i]+arr[j];
	printf("Min time is %d",min);

	return 0;
}
