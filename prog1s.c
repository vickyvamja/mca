#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("enter the number\n");
	scanf("%d%d",&a,&b);
	printf("before swapping value is a: %d\n",a);
	printf("before swapping value is b: %d\n",b);
	swap(&a,&b);
	printf("a : %d\n",a);
	printf("b : %d",b);
}
void swap(int *n,int *m)
{
	int temp=*n;
	*n=*m;
	*m=temp;
	printf("after swapping value is a: %d\n",*n);
	printf("after swapping value is b: %d",*m);
}
