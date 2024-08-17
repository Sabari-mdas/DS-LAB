#include<stdio.h>
void main()
{
	int ar[100],n,sr,i,flag=0;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Enter the element to search");
	scanf("%d",&sr);
	for(i=0;i<n;i++)
	{
		
		if(ar[i]==sr)
		{
			flag=1;
			printf("Element is found at %d",i+1);
		}
		}
	if(flag==0)
		printf("The element is not found");
}
