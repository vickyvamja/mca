#include<iostream>
using namespace std;

template <class T,class L>
T max(T x,L y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
template <class T,class L>
T min(T x,L y)
{
	if(x<y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
template <class T,class L>
T swap(T x,L y)
{
	T temp=x;
	x=y;
	y=temp;
}
template <class T,class L>
T average(T x[],L y)
{
	float total=0;
	for(int i=0;i<y;i++)
	{
		total=total+x[i];
	}
	float average=(float)total/y;
	return average;
}
int main()
{
	int a,b;
	cout<<"enter the a and b : "<<endl;
	cin>>a>>b;
	cout<<endl;
	cout<<"max number is : "<<max(a,b)<<endl;
	min(a,b);
	cout<<"min number is : "<<min(a,b)<<endl;
	swap(a,b);
	cout<<"swap number is a: "<<a<<endl;
	cout<<"swap number is b: "<<b<<endl;
	int n;
	cout<<"enter of the element "<<endl;
	cin>>n;
	float arr[n];
	cout<<"enter the numbers :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"average :"<<average(arr,n)<<endl;	
}

