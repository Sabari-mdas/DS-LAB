#include<stdio.h>
void main()
{
	int temp,i,j,ar[100],n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
			temp=ar[j];
			ar[j]=ar[j+1];
			ar[j+1]=temp;
			}
		}
	}
	printf("Sorted elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d",ar[i]);
		printf("\t");
	}
}
