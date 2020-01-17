#include<iostream>
using namespace std;
void show(int*,int);
void show(int**,int,int);
void show(char*);
void show(char**,int);
int main()
{
	/*------------------------a-------------------------*/


	int *p;
	int n;
	cout<<"enter the no of element : "<<endl;
	cin>>n;
	p=(int *)malloc(sizeof(int) * n);
	cout<<"enter element in the array : ";
	for(int i=0;i<n;i++)
	{		
		cin>>p[i];
	}
	cout<<endl;
	show(p,n);
	free(p);


	/*-------------------------b-----------------------*/

	
	int **p1;
	int r,c;
	cout<<"enter the row and columns : "<<endl;
	cin>>r>>c;	
	p1=(int **)malloc(sizeof(int *) * r);
	for(int i=0;i<r;i++)
		p1[i]=(int *)malloc(sizeof(int) * c);
	cout<<"enter matrix values : "<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>p1[i][j];
		}
	}
	cout<<endl;
	show(p1,r,c);
	free(p1);
	
	/*----------------------c-----------------------*/

	char *q;
	int n1;
	cout<<"howmany char are insert :"<<endl;
	cin>>n1;
	q=(char *)malloc(sizeof(char)*n);
	cout<<"enter element in the array : ";
	for(int i=0;i<n1;i++)
	{		
		cin>>q[i];
	}
	cout<<endl;
	show(q);
	free(q);

	/*------------------------d----------------------*/

	char **h;
	int row,col;
	cout<<"enter the row and columns : "<<endl;
	cin>>row>>col;	
	h=(char **)malloc(sizeof(char *) * row);
	for(int i=0;i<row;i++)
		h[i]=(char *)malloc(sizeof(char) * col);
	cout<<"enter matrix values : "<<endl;
	for(int i=0;i<row;i++)
	{
		cin>>h[i];
	}
	cout<<endl;
	show(h,row);
	free(h);

	/*-------------------------------------------------*/
}
void show(int *p,int n)
{
	for(int i=0;i<n;i++)
		cout<<p[i]<<endl;
}
void show(int **p1,int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<p1[i][j];
		}
		cout<<endl;
	}
}
void show(char *q)
{
	for(int i=0;q[i]!='\0';i++)
		cout<<q[i];
}
void show(char **h,int row)
{
	for(int i=0;i<row;i++)
	{
		cout<<h[i];
		cout<<endl;
	}
}
