#include<stdio.h>
struct stud
{
	int rollno;
	char name[25];
	int mark[20];
	int total;
};
void add(struct stud *s,int );
void display(struct stud *s,int ,int);
int main()
{
	int n;
	int res;
	printf("howmany record insert\n");
	scanf("%d",&n);
	struct stud s[n];
	add(s,n);
}
void add(struct stud *s,int n)
{
	int m;
	for(int i=0;i<n;i++)
	{
		printf("\nrollno :");
		scanf("%d",&s[i].rollno);
		printf("\nname :");
		scanf("%s",s[i].name);
		printf("enter the howmany mark");
		scanf("%d",&m);
		s[i].total=0;
		for(int j=0;j<m;j++)
		{
			printf("\nmark :");
			scanf("%d",&s[i].mark[j]);
			s[i].total=s[i].total+s[i].mark[j];
		}
	}
	display(s,n,m);
}
void display(struct stud *s,int n,int m)
{	
	int flag;
	for(int i=0;i<n;i++)
	{
		printf("\nrollno: %d",s[i].rollno);
		printf("\nname  : %s",s[i].name);
		for(int j=0;j<m;j++){
		printf("\nmark  : %d",s[i].mark[j]);
		if(s[i].mark[j]<12)
		{
			flag=1;			
		}
		else
		{
			flag=2;
		}
		}
		if(flag==1)
		{
			printf("\nresult is fail\n");
		}
		else
		{
			
			printf("\ntotal  : %d",s[i].total);
			printf("\nresult is pass\n");
		}
	}
}
