			/*FRACTIONAL KNAPSACK*/

#include<stdio.h>
#include<conio.h>
void swapint(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}

void swapfloat(float *x,float *y)
{
float temp;
temp=*x;
*x=*y;
*y=temp;
}

void main()
{
int i,j,n,w[50],p[50],M;
float ratio[50],profit=0.0;
clrscr();
printf("\nEnter the number of items : ");
scanf("%d",&n);
printf("\nEnter the weight of each item : \n");
for(i=0;i<n;i++)
	scanf("%d",&w[i]);
printf("\nEnter the profit of each item : \n");
for(i=0;i<n;i++)
	scanf("%d",&p[i]);
printf("\nEnter the maximum capacity of Knapsack : ");
scanf("%d",&M);
for(i=0;i<n;i++)
       ratio[i]=(float)p[i]/(float)w[i];
for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
		if(ratio[i]<ratio[j])
		{
		swapint(&w[i],&w[j]);
		swapint(&p[i],&p[j]);
		swapfloat(&ratio[i],&ratio[j]);
		}
printf("\nProfit  Weight   Ratio\n");
for(i=0;i<n;i++)
	printf("%d\t%d\t%f\n",p[i],w[i],ratio[i]);
i=0;
while(i<n && M-w[i]>0)
		{
		M-=w[i];
		profit+=p[i];
		i++;
		}
profit+=M*(float)p[i]/w[i];
printf("\nTotal profit : %f",profit);
getch();
}
