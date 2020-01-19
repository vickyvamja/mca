#include<stdio.h>
void swap(int n,int m)
{
	int temp=n;
	n=m;
	m=temp;
	printf("\nafter swapping value is a: %d",n);
	printf("\nafter swapping value is b: %d",m);
}
int main()
{
	int a,b;
	printf("enter the number\n");
	scanf("%d%d",&a,&b);
	printf("\nbefore swapping value is a: %d",a);
	printf("\nbefore swapping value is b: %d",b);
	swap(a,b);
	printf("\na : %d",a);
	printf("\nb : %d",b);	
}
