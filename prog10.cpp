#include<iostream>
using namespace std;
void max(int&,int&);
void min(int&,int&);
void average(int*,int);
void swap(int&,int&);
int main()
{
	int a,b;
	cout<<"enter the a and b : "<<endl;
	cin>>a>>b;
	cout<<endl;
	max(a,b);
	cout<<endl;
	swap(a,b);
	cout<<endl;
	int p,q;
	cout<<"enter the p and q : "<<endl;
	cin>>p>>q;
	cout<<endl;
	min(p,q);
	cout<<endl;
	int *av;
	int n;
	cout<<"enter howmany number enter : "<<endl;
	cin>>n;	
	av=(int *)malloc(sizeof(int) * n);
	cout<<"enter the number :"<<endl;
	for(int i=0;i<n;i++)
		cin>>av[i];
	average(av,n);	
}
void max(int& x,int& y)
{
	if(x>y)
	{
		cout<<"max number is : "<<x;
	}
	else
	{
		cout<<"max number is : "<<y;
	}
}
void min(int& f,int& g)
{
	if(f<g)
	{
		cout<<"min number is : "<<f;
	}
	else
	{
		cout<<"min number is : "<<g;
	}
}
void swap(int& j,int& k)
{
	int temp=j;
	j=k;
	k=temp;
	cout<<"swapping value is : "<<j<<"  "<<k<<endl;
}
void average(int *av,int n)
{
	float average;
	int total=0;
	int counter=0;
	for(int i=0;i<n;i++)
		counter++;
	for(int i=0;i<n;i++)
		total=total+av[i];
	average=(float)total/counter;
	cout<<endl;
	cout<<"average is : "<<average<<endl;			
}
