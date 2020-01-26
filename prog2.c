#include<stdio.h>
void oddeven(char [],int);
int main()
{
	int n;
	printf("\n howmany char are insert ? \n");
	scanf("%d",&n);
	char ch[n];
	printf("\n enter the character : \n");
	scanf("%s",ch);
	oddeven(ch,n);
}
void oddeven(char ch[],int n)
{
	int temp=48,flag;
	int digit[n];
	for(int i=0;ch[i]!='\0';i++)
	{
		digit[i]=ch[i];
		digit[i]-=temp;
		printf("%d\n",digit[i]);
	}
	for(int i=0;digit[i]!='\0';i++)
	{
		if(digit[i] & 1 == 1)
			flag=1;
			
		else
			flag=2;
			
	}
	if(flag==1)
	{
		printf("\n:- odd \n");
	}
	else
	{
		printf("\n:- even \n");
	}
}
