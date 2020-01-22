#include<stdio.h>
int main()
{
	int n;
	printf("\n enter the number of element : \n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	/*for(int i=0;i<n-1;i++)
	{
		if(i%2==0)
		{
			if(arr[i]>arr[i+1])
			{
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		else
		{
			if(arr[i]<arr[i+1])
			{
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}	
		}
	}*/

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=1;i<n;i++)
	{
		int temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=arr[i];
	}

	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
