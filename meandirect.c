//descrete mean using direct methods 
#include<stdio.h>
int main()
{
	int a;
	printf("enter the observation : \n");
	scanf("%d",&a);
	int obj[a];
	for(int i=0;i<a;i++)
	{
		scanf("%d",&obj[i]);
	}
	printf("\n enter the frequency : \n");
	int fre[a];
	for(int i=0;i<a;i++)
	{
		scanf("%d",&fre[i]);
	}	
	int total=0;
	for(int i=0;i<a;i++)
	{
		total=total+fre[i];
	}
	printf("\n observation    frequency   \n");
	for(int i=0;i<a;i++)
	{
		printf("%d\t\t%d\n",obj[i],fre[i]);
	}
	printf("total : \t");
	printf("%d \n",total);
	float mean;
	mean=(float)total/a;
	printf(" mean = xi / n \n");
	printf(" = %d / %d \n",total,a);
	printf("mean = %.2f",mean);
}
