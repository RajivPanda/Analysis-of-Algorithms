			/*SUM OF SUBSET*/

#include<conio.h>
#include<stdio.h>
int w[50]={0},x[50]={0},i,M,r=0;
void print(int k)
{
for(i=0;i<=k;i++)
	if(x[i]==1)
		printf("%d ",w[i]);
printf("\n\n");
}
void Sumofsubset(int s,int k,int r)
{
//s is the sum,k is the index & r is the remaining sum,i.e,(Sum of Subsets-s)
x[k]=1;
if(s+w[k]==M)
	print(k);
else if(s+w[k]+w[k+1]<=M)
	Sumofsubset(s+w[k],k+1,r-w[k]);
if(s+r-w[k]>=M && s+w[k+1]<=M)
	{
	x[k]=0;
	Sumofsubset(s,k+1,r-w[k]);
	}
}

void main()
{
int n;
clrscr();
printf("\nEnter the number of elements in the set : ");
scanf("%d",&n);
printf("\nEnter the elements of the set in increasing order : \n");
for(i=0;i<n;i++)
	{
	scanf("%d",&w[i]);
	r+=w[i];
	}
printf("\nEnter the value of sum to be found :\n");
scanf("%d",&M);
printf("\n\nSum of Subsets : \n\n");
Sumofsubset(0,0,r);
getch();
}
