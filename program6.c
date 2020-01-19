#include<stdio.h>
int r,c;
void sum(int ar[r][c],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d",ar[i][j]);
		}
		printf("\n");
	}
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
	sum(arr,r,c);
}
