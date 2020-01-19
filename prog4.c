#include<stdio.h>
char print(char);
int main()
{
	char ch;
	printf("enter the cahracter : \n");
	scanf("%c",&ch);
	char (*f)(char);
	f = print;
	char ch2=f(ch);
	printf("\n character is : %c",ch2);
}
char print(char ch2)
{
	return ch2;
}


