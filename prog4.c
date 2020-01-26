#include<stdio.h>
void changechar(char [],int);
int main()
{
	int n;
	printf("\n howmany char are insert ? \n");
	scanf("%d",&n);
	char str[n];
	printf("\n enter the string : \n");
	scanf("%s",str);
	changechar(str,n);
}
void changechar(char str[],int n)
{
	char c[1];
	printf("\n enter character if you want to change ? \n");
	scanf("%s",c);
	for(int i=0;c[i]!='\0';i++)
		printf("\n%c\n",c[i]);
	int position;
	printf("\n enter the postition : \n");
	scanf("%d",&position);
	position=position-1;
	for(int i=0;str[i]!='\0';i++)
	{	
		if(i==position)
			str[i]=c[0];
		printf("%c",str[i]);
	}
}
