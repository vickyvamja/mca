#include<iostream>
using namespace std;
long calcfactorial(int);
int main()
{
	int n;
	long fact;
	cout<<"enter the number : "<<endl;
	cin>>n;
	fact=calcfactorial(n);	
	cout<<"factorial of "<<n<<" is : "<<fact<<endl;
}
long calcfactorial(int x)
{
	long f=1;
	while(x>0)
	{
		f=f*x;
		x--;
	}
	return f;
}
