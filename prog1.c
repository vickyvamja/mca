//discrete frequency distribution methods
#include<stdio.h>
int main()
{
	int a;
	int counter;
	int total=0;
	printf("enter howmany data ?\n");
	scanf("%d",&a);
	int rec[a],rec2[a];
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
		printf("\n%d",rec[i]);
	}
	int lowest=rec[0];
	int higest=rec[a-1];
	int low=lowest;
	int high=higest;
	printf("\nlowest : %d\n",lowest);
	printf("higest : %d\n",higest);
	int count=0; 
	for(int i=lowest;i<=higest;i++)
		count++;
	printf("\n\n%d\n\n",count);
	int n2[count],n[count];
	for(int i=0;i<count;i++)
	{
		n2[i]=lowest;
		lowest++;
	}
	for(int j=0;j<count;j++)
	{
		counter=0;
		for(int i=0;i<a;i++)
		{
			if(n2[j]==rec[i])
				counter++;
			
		}
		n[j]=counter;
	}
	printf("class");printf("  frequency");
	for(int i=0;i<count;i++)
	{
		printf("\n%d",n2[i]);	
		printf("        %d\n",n[i]);
	}
	printf("total :");
	for(int i=0;i<count;i++)
	{
		total=total+n[i];
	}
	printf("     %d\n",total);
}
