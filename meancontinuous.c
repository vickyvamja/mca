//find mean continuous exclusive methods
#include<stdio.h>
int main()
{
	int a,interval;
	printf("\n enter howmany class ? \n");
	scanf("%d",&a);
	printf("\n enter intervaal between two classes : \n");
	scanf("%d",&interval);
	int rec[a],rec2[a];
	printf("\n enter classes : \n");
	for(int i=0;i<a;i++)
	{
		scanf("%d",&rec[i]);
	}
	for(int i=0;i<a;i++)
	{
		rec2[i]=rec[i]+interval;
	}
	int fre[a];
	printf("\n enter frequency : \n");
	for(int i=0;i<a;i++)
	{
		scanf("%d",&fre[i]);
	}
	float xi[a];
	for(int i=0;i<a;i++)
	{
		xi[i]=(rec[i]+rec2[i])/2;
	}
	float fixi[a];
	for(int i=0;i<a;i++)
	{
		fixi[i]=fre[i]*xi[i];
	}
	int d;
	printf("enter the A value :\n");
	scanf("%d",&d);
	float di[a];
	for(int i=0;i<a;i++)
	{
		di[i]=xi[i]-d;
	}
	float fidi[a];
	float fd=0;
	for(int i=0;i<a;i++)
	{
		fidi[i]=fre[i]*di[i];
		fd=fd+fidi[i];
	}
	float ui[a];
	for(int i=0;i<a;i++)
	{
		ui[i]=(xi[i]-d)/interval;
	}
	float fiui[a];
	float fu=0;
	for(int i=0;i<a;i++)
	{
		fiui[i]=fre[i]*ui[i];
		fu=fu+fiui[i];
	}
	float total=0;
	int sum=0;
	for(int i=0;i<a;i++)
	{
		total=total+fixi[i];
		sum=sum+fre[i];	
	}
	printf("\nclass    freq     xi    fixi  di=x-%d    fidi   ui=x-%d/%d     fiui \n",d,d,interval);
	for(int i=0;i<a;i++)
	{
		printf("%d-%d\t%d\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t\t%.1f\n",rec[i],rec2[i],fre[i],xi[i],fixi[i],di[i],fidi[i],ui[i],fiui[i]);
	 }
	printf("total:\tfi\t\tfixi\t\tfidi\t\t\tfiui\n");		
	printf("\t%d\t\t%.1f\t\t%.1f\t\t\t%.1f\n",sum,total,fd,fu);
	float mean;
	mean=(float)total/sum;
	printf("\n mean= fixi / fi \n");
	printf("       =%.1f / %d\n",total,sum);
	printf("   mean=%.1f",mean);
	float mean2;
	mean2=d+(float)fd/sum;
	printf("\n");
	printf("\n mean=A +(fixi / fi) \n");
	printf("       =%d + ( %.1f / %d\n ) ",d,total,sum);
	printf("   mean=%.1f\n",mean2);
	float mean3;
	float u;
	printf("\n");
	u=fu/sum;
	printf("u = fiui / n");
	printf("\n  = %.1f / %d ",fu,sum);
	printf("\nu=%.1f",u);
	mean3=d+(interval*u);
	printf("\n");
	printf("\n mean=A +(c * u) \n");
	printf("       =%d + ( %d * %.1f\n ) ",d,interval,u);
	printf("   mean=%.1f",mean3);
}

