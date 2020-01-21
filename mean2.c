//descrete mean using direct methods 
#include<stdio.h>
int main()
{
	int a;
	printf("enter the number of records : \n");
	scanf("%d",&a);
	printf("enter the xi : \n");	
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
	int fixi[a];
	for(int i=0;i<a;i++)
	{
		fixi[i]=(obj[i]*fre[i]);
	}
	int sum=0;
	for(int i=0;i<a;i++)
	{
		sum=sum+fixi[i];
	}
	printf("\nxi   frequency   fixi   \n");
	for(int i=0;i<a;i++)
	{
		printf("%d\t%d\t%d\n",obj[i],fre[i],fixi[i]);
	}
	printf("total :\t");
	printf("%d\t",total);
	printf("%d\n",sum);
	float mean=(float)sum/total;
	printf(" mean = fixi / n \n");
	printf(" = %d / %d \n",sum,total);
	printf("mean = %.2f",mean);
	
}
