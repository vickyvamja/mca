#include<iostream>
using namespace std;
void swap1(int,int);
void swap2(int *,int *);
void swap3(int&,int&);
int main()
{
	int x,y;
	cout<<"enter the x and y : "<<endl;
	cin>>x>>y;
	cout<<"before swapping value x is : "<<x<<endl;
	cout<<"before swapping value y is : "<<y<<endl;
	swap1(x,y);
	cout<<"after pass by value swapping value x is : "<<x<<endl;
	cout<<"after pass by value swapping value y is : "<<y<<endl;
	swap2(&x,&y);
	cout<<"after pass by pointer swapping value x is : "<<x<<endl;
	cout<<"after pass by pointer swapping value y is : "<<y<<endl;
	swap3(x,y);
	cout<<"after pass by reference swapping value x is : "<<x<<endl;
	cout<<"after pass by reference swapping value y is : "<<y<<endl;	
}
void swap1(int j,int k)
{
	int temp=j;
	j=k;
	k=temp;
	cout<<"after swapping value x is : "<<j<<endl;
	cout<<"after swapping value y is : "<<k<<endl;
}
void swap2(int *n,int *m)
{
	int temp=*n;
	*n=*m;
	*m=temp;
	cout<<"after swapping value x is : "<<*n<<endl;
	cout<<"after swapping value y is : "<<*m<<endl;
}
void swap3(int& p,int& q)
{
	int temp=p;
	p=q;
	q=temp;
	cout<<"after swapping value x is : "<<p<<endl;
	cout<<"after swapping value y is : "<<q<<endl;
}
