#include<stdio.h>
void strreplace(char [], char [],char [],int n);
int main()
{
	int n;
	printf("\n enter howmany character enter ? \n");
	scanf("%d",&n);
	char str1[n],str2[n],str3[n];
	printf("\n enter the string : \n");
	scanf("%s",str1);
	printf("\n enter the replace : \n");
	scanf("%s",str2);
	printf("\n enter the replace with string : \n");
	scanf("%s",str3);
	strreplace(str1,str2,str3,n);
	return 0;
}
void strreplace(char str1[], char str2[],char str3[],int n)
{
	for(int i=0;str2[i]!='\0';i++)
	{
		for(int j=0;str1[j]!='\0';j++)
		{
			if(str1[j]==str2[i])
			{
				printf("%c",str1[j]);
				str1[j]=str3[i];
			}
		}
	}
	printf("%s",str1);
}
