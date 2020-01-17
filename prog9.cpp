#include<iostream>
using namespace std;
void swap(int&,int&);
void swap(float&,float&);
void swap(double&,double&);
void swap(char&,char&);
int main()
{
	int x,y;
	cout<<"enter int x and y : "<<endl;
	cin>>x>>y;
	swap(x,y);
	cout<<"value int x and y is : "<<x<<" "<<y<<endl;

	float a,b;
	cout<<"enter float a and b : "<<endl;
	cin>>a>>b;
	swap(a,b);
	cout<<"value float a and b is : "<<a<<" "<<b<<endl;

	double j,k;
	cout<<"enter double j and k : "<<endl;
	cin>>j>>k;
	swap(j,k);
	cout<<"value double j and k is : "<<j<<" "<<k<<endl;

	char s,r;
	cout<<"enter char s and r : "<<endl;
	cin>>s>>r;
	swap(s,r);
	cout<<"value char s and r is : "<<s<<" "<<r<<endl;

	char st1[20],st2[20];
	cout<<"enter string st1 and st2 : "<<endl;
	cin>>st1>>st2;
	swap(st1,st2);
	cout<<"value string st1 and st2 is : "<<st1<<"  "<<st2<<endl;
}
void swap(int& p,int& q)
{
	int temp=p;
	p=q;
	q=temp;
}
void swap(float& g,float& h)
{
	float temp=g;
	g=h;
	h=temp;
}
void swap(double& d,double& c)
{
	double temp=d;
	d=c;
	c=temp;
}
void swap(char& t,char& y)
{
	char temp=t;
	t=y;
	y=temp;
}
void swap(char (&str1)[20],char (&str2)[20])
{
	char temp[20]; 
	temp[20]=str1[20];
	str1[20]=str2[20];
	str2[20]=temp[20];
}
