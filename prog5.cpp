#include<iostream>
using namespace std;
int maxnumber(int& x,int& y)
{
	if(x>y)
		return x;
	else
		return y;
}
int minnumber(int& p,int& q)
{
	if(p<q)
		return p;
	else
		return q;
}
void uppcase(char (&str)[20])
{
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
	}	
}
void lowecase(char (&str2)[20])
{
	
	for(int i=0;str2[i]!='\0';i++)
	{
		if(str2[i]>=65 && str2[i]<97)
		{
			str2[i]=str2[i]+32;
		}	
	}	
}
void reverse(char (&rev)[20])
{
	int j=0,g=0;
	char qry[20];
	for(int i=0;rev[i]!='\0';i++)
		j++;
	qry[j--]='\0';
	g=j;
	for(int i=0;rev[i]!='\0';i++)
	{
		qry[j--]=rev[i];
	}
	for(int i=0;i<g;i++)
	{
		rev[i]=qry[i];
	}
}
int main()
{
	int a,b;
	int max,min;
	cout<<"enter the a and b :"<<endl;
	cin>>a>>b;
	max=maxnumber(a,b);
	cout<<"max number is :"<<max<<endl;
	min=minnumber(a,b);
	cout<<"min number is :"<<min<<endl;
	char ch[20];
	cout<<"enter the string : "<<endl;
	cin>>ch;
	uppcase(ch);
	cout<<"string is : "<<ch<<endl;
	char ch2[20];
	cout<<"enter the string : "<<endl;
	cin>>ch2;
	lowecase(ch2);	
	cout<<"string is : "<<ch2<<endl;
	char s[20];
	cout<<"enter the string : "<<endl;
	cin>>s;
	reverse(s);
	cout<<"string is : "<<s;
	return 0;
}
