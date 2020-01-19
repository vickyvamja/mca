#include<stdio.h>
int main()
{
	int n;
	printf("enter the element");
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	int *a=num;
	for(int i=0;i<n;i++)
	{
		printf("%d\n",*(a+i));
	}
}
