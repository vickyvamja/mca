#include<stdio.h>
//void arrsum(int [20][20],int,int);
void arrsum(int arr[20][20],int r,int c)
{
	int sum=0;
	printf("%d\n%d",r,c);
	for(int i=0;i<=r;i++)
	{
		for(int j=0;j<=c;j++)
		{
			//sum=sum+arr1[i][j];
			printf("%d\n",arr[i][j]);
		}
	}
	printf("%d\n",sum);
}
int main()
{
	int r,c;
	printf("enter the row and coloum : \n");
	scanf("%d%d",&r,&c);
	int arr[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			//sum=sum+arr1[i][j];
			printf("main =%d\n",arr[i][j]);
		}
	}
	arrsum(arr,r,c);
}

