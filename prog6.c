#include<stdio.h>
#include<stdlib.h>
struct stud
{
	int rollno;
	char name[25];
	int mark[20];
	int total;
};
void add(struct stud *s,int n);
void display(struct stud *s,int n,int m);
int main()
{
	int n;
	int res;
	printf("howmany record insert \n");
	scanf("%d",&n);
	struct stud s;
	struct stud *s1;
	s1=(struct stud *)malloc(sizeof(s)*n);
	add(s1,n);
}
void add(struct stud *s,int n)
{
	int m;
	for(int i=0;i<n;i++)
	{
		printf("\n rollno :");
		scanf("%d",&s[i].rollno);
		printf("\n name :");
		scanf("%s",s[i].name);
		printf("\n howmany marks are enter");
		scanf("%d",&m);
		s[i].total=0;
		for(int j=0;j<m;j++)
		{
			printf("\n mark %d : \t",j+1);
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
		printf("\n rollno : %d",s[i].rollno);
		printf("\n name : %s",s[i].name);
		for(int j=0;j<m;j++)
		{
			printf("\n mark %d : %d",j+1,s[i].mark[j]);
			if(s[i].mark[j]<12)
			{
				flag==1;
			}
			else
			{
				flag=2;
			}
		}
		if(flag==1)
		{
			printf("\n result(pass/fail) : fail\n");
		}
		else
		{
			printf("\n total : %d",s[i].total);
			printf("\n result(pass/fail) : pass\n");
		}
	}

}
