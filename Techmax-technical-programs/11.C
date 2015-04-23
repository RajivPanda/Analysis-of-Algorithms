			/* 0/1 KNAPSACK */

#include<stdio.h>
#include<conio.h>
#define max(x,y) x>y?x:y
void knapsack(int weight[],int profit[],int W,int capacity,int n)
{
int i,j=0,k,w,b[100][100],flag[20]={0},sum=0;
for(w=0;w<=capacity;w++)
      b[0][w]=0;
for(i=1;i<=n;i++)
      b[i][0]=0;
for(i=1;i<=n;i++)
	for(w=0;w<=capacity;w++)
		if(weight[i-1]<=w)
			b[i][w]=max(profit[i-1]+b[i-1][w-weight[i-1]],b[i-1][w]);
		else	b[i][w]=b[i-1][w];
printf("\n\nCOMPUTATIONAL TABLE : \n\n");
for(i=0;i<=n;i++)
	{
	for(w=0;w<=capacity;w++)
		printf("%3d ",b[i][w]);
	printf("\n");
	}
//BACKTRACKING
i=n;
k=capacity;
do
{
if(b[i][k]!=b[i-1][k])
		{
		k-=weight[i-1];
		flag[i]=1;
		i--;
		}
else		i--;
}
while(k>=0);
printf("\nTHE ITEMS SELECTED ARE : \n");
for(i=1;i<=n;i++)
	if(flag[i]==1)
	{
	printf("%d ",i);
	sum+=profit[i-1];
	}
printf("\n\nOPTIMAL SOLUTION = %d ",sum);
}

void main()
{
int i,j,n,M,weight[100],profit[100],max=0;
clrscr();
printf("\nEnter the number of items : ");
scanf("%d",&n);
printf("\nEnter the weight of each item :\n");
for(i=0;i<n;i++)
      {
      scanf("%d",&weight[i]);
      if(max<weight[i])
	 max=weight[i];
      }
printf("\nEnter the profit of each item :\n");
for(i=0;i<n;i++)
      scanf("%d",&profit[i]);
printf("\nEnter the maximum capacity of Knapsack : ");
scanf("%d",&M);
knapsack(weight,profit,max,M,n);
getch();
}
