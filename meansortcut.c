//descrete mean using sortcut methods 
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
	int d;
	printf("\n enter the number for value d \n");
	scanf("%d",&d);
	int total=0;
	for(int i=0;i<a;i++)
	{
		total=total+fre[i];
	}
	int fidi[a],di[a];
	for(int i=0;i<a;i++)
	{
		di[i]=obj[i]-d;
	}
	for(int i=0;i<a;i++)
	{
		fidi[i]=fre[i]*di[i];
	}
	int sum=0;
	for(int i=0;i<a;i++)
	{
		sum=sum+fidi[i];
	}
	printf("\nxi  frequency  di=xi-%d  fidi  \n",d);
	for(int i=0;i<a;i++)
	{
		printf("%d\t%d\t%d\t%d\n",obj[i],fre[i],di[i],fidi[i]);
	}
	printf("total :\t");
	printf("%d\t\t",total);
	printf("%d\n",sum);
	float mean=(float)d+(sum/total);
	printf(" mean = A + (fidi / n ) \n");
	printf(" = %d + ( %d / %d )\n",d,sum,total);
	printf("mean = %.2f",mean);
	
}
