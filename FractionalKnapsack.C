#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,m,n,t1,t2;
	int p[10],w[10];		//profits and weights
	float puc[10],profit,temp;	//puc:Profit under Capacity, ie. ratio
	clrscr();
	printf("Fractional Knapsack problem\n\n");
	printf("Enter the number of items:");
	scanf("%d",&n);
	printf("Enter the weight of each item:");
	for(i=0; i<n; i++)
		scanf("%d",&w[i]);
	printf("Enter the profits for each item:");
	for(i=0; i<n; i++)
		scanf("%d",&p[i]);
	printf("Enter capacity:");
	scanf("%d",&m);
	printf("The profit-to-weight ratio for each item is:\n");
	for(i=0; i<n; i++)		
	{
		puc[i]=(float)p[i]/w[i];
		printf("%.2f\t",puc[i]);
	}
	for(i=0; i<n; i++)			//Sorting the profits, weights and ratio in descending order of ratio
	{	for(j=0; j<(n-i); j++)
		{
			if(puc[j]<puc[j+1])
			{
				temp=puc[j];
				t1=w[j];
				t2=p[j];
				puc[j]=puc[j+1];
				w[j]=w[j+1];
				p[j]=p[j+1];
				puc[j+1]=temp;
				w[j+1]=t1;
				p[j+1]=t2;
			}
		}
	}printf("\n");
	for(i=0; w[i]<m; i++)
	{	
		profit+=p[i];
		m-=w[i];
	}
	
	profit+= p[i]*((float)m/w[i]);
	printf("\nMaximum profit earned= Rs.%.2f",profit);
	getch();
}
/*
OUTPUT:
Fractional Knapsack problem

Enter the number of items:5
Enter the weight of each item:12 1 2 1 4
Enter the profits for each item:4 2 2 1 10
Enter capacity:15
The profit-to-weight ratio for each item is:
0.33	2.00	1.00	1.00	2.50	

Maximum profit earned= Rs.17.33
*/
	
