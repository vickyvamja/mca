#include<stdio.h>
int main()
{
	int a;
	int class;
	printf("how many record are insert ? ");
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
		printf("%d",rec[i]);
	int lower=rec[0];
	int higest=rec[a-1];
	int low=lower;
	int high=higest;
	printf("howmany classes are applied ?\n");
	scanf("%d",&class);
	float r=(float)(higest-lower)/class;
	int r1=r;
	int n1[class],n2[class],n5[class];
	if(r1<r)
	{
		r1=r1+1;
		printf("range is : %d",r1);
	}
	int x=1;	
	for(int i=0;i<class;i++)
	{
		if(i>0)
		n1[i]=lower+1;
		else
		n1[i]=lower;
		n2[i]=lower+r1;
		lower=lower+r1;	
	}
	int counter;
	for(int j=0;j<class;j++)
	{
		for(int i=0;i<a;i++)
		{
			if(rec[i]>=n1[j] && rec[i]<=n2[j])
				counter++;
		}
		n5[j]=counter;
		counter=0;
	}
	float n3[class],n4[class];
	float cf=(n1[1]-n2[0])/2.0;
	printf("\n cf  :  %f\n",cf);
	for(int i=0;i<class;i++)
	{
		n3[i]=n1[i]-cf;
		n4[i]=n2[i]+cf;		
	}
	printf("\n\nclass\t\tboundries\t\tfrequency");
	for(int i=0;i<class;i++)
	{
		printf("\n%d -",n1[i]);
		printf("%d\t\t",n2[i]);
		printf("%.1f -",n3[i]);
		printf("%.1f\t\t",n4[i]);
		printf("%d\n",n5[i]);		
	}
	int total=0;
	printf("total\t\t\t\t: ");
	for(int i=0;i<class;i++)
		total=total+n5[i];			
	printf("\t\t\t %d \n",total);
}
