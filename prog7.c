#include<stdio.h>
#include<string.h>
int main()
{
	int n,len,i,in;
	printf("how many character are insert ?\n");
	scanf("%d",&n);
	char str[n];
	printf("\n enter the string");
	scanf("%s",str);
	len=strlen(str);
	in=len-1;
	for(i=0;i<in;i++)
	{
		if(str[i]!=str[in])
		{
			break;
		}
		in--;	
	}
	if(i>=in)
	{
		printf("\n %s is a palindrome string",str);
	}
	else
	{
		printf("\n %s is not a palindrome string",str);
	}
}
