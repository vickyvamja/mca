//1. generate frequency distribution table for the given raw data.
#include<stdio.h>
int main()
{
	int a;
	int class;
	int counter=0;
	printf("enter the data\n");
	scanf("%d",&a);
	int rec[a];
	for(int i=0;i<a;i++)
	{
		scanf("%d",&rec[i]);
	}
	for(int i=0;i<a-1;i++)
	{
		for(int j=i+1;j<a;j++)
		{
			if(rec[i]>rec[j])
			{
				int temp=rec[i];
				rec[i]=rec[j];
				rec[j]=temp;
			}
		}
	}
	for(int i=0;i<a;i++)
	{
		printf("\n%d\n",rec[i]);
	}
	int lower=rec[0];
	int upper=rec[a-1];
	printf("lower = %d\n",lower);
	printf("upper = %d\n",upper);
	printf("select no of classes\n");
	scanf("%d",&class);
	float r=(float)(upper-lower)/class;
	int r1=r;
	int n1[class],n2[class],n3[class];
	if(r1<r)
	{
		r1=r1+1;
		printf("range is %d\n",r1);
		//int n1[class],n2[class],n3[class];
	}
	for(int i=0;i<class;i++)
	{
		n1[i]=lower;
		n2[i]=lower+r1;
		lower=lower+r1;
	}
	for(int j=0;j<class;j++){
	for(int i=0;i<a;i++)
	{
		if(rec[i]>=n1[j] && rec[i]<n2[j])
		{
			counter++;
		}
	}
	n3[j]=counter;
	counter=0;
	}
	printf("class           ");printf("frequency \n");
	for(int i=0;i<class;i++)
	{
		printf("%d",n1[i]);
		printf("-");
		printf("%d            ",n2[i]);
		printf("%d\n",n3[i]);
	}
	int total=0;
	for(int i=0;i<class;i++)
	{
		total=total+n3[i];
	}
	printf(" total    :  %d",total);
}
