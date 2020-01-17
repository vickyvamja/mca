#include<iostream>
using namespace std;
inline int checkleapyear(int year);
int main()
{
	int y;
	cout<<"enter the year : "<<endl;
	cin>>y;
	if(checkleapyear(y)==1)
		cout<<"year"<<y<<" is  "<<"leap year "<<endl;
	else
		cout<<"year"<<y<<" is  "<<"not leap year "<<endl;	
}
inline int checkleapyear(int year)
{
	if((year%4==0)&&(year%100!=0)||(year%400==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
