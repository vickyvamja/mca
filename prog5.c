#include<stdio.h>
#include<stdlib.h>
void merge(int *,int *,int,int);
int main()
{
	int n1,n2;
	printf("\n enter element of 1 array : \n");
	scanf("%d",&n1);	
	printf("\n enter element of 2 array : \n");
	scanf("%d",&n2);
	int *p1,*p2;
	p1=(int *)malloc(sizeof(int)*n1);
	p2=(int *)malloc(sizeof(int)*n2);
	merge(p1,p2,n1,n2);
}
void merge(int *p1,int *p2,int n1,int n2)
{
	int *p3;
	int n3=n1+n2;
	p3=(int *)malloc(sizeof(int)*n3);
	printf("\n enter array 1:\n");
	for(int i=0;i<n1;i++)
	{
		scanf("%d",&p1[i]);
	}
	for(int i=0;i<n1;i++)
	{
		printf("%d\n",p1[i]);
	}
	printf("\n enter array 2:\n");
	for(int i=0;i<n2;i++)
	{
		scanf("%d",&p2[i]);
	}
	for(int i=0;i<n2;i++)
	{
		printf("%d\n",p2[i]);
	}
	for(int i=0;i<n1;i++)
	{
		p3[i]=p1[i];
	}
	for(int i=0,j=n1;j<n3 && i<n2;i++,j++)
	{
		p3[j]=p2[i];
	}
	printf("\n two array are merged in following : \n");
	for(int i=0;i<n3-1;i++)
	{
		for(int j=i+1;j<n3;j++)
		{
			if(p3[i]>p3[j])
			{
				int temp=p3[i];
				p3[i]=p3[j];
				p3[j]=temp;	
			}
		}
		printf("%d\n",p3[i]);
	}
	free(p1);
	free(p2);
	free(p3);
}
