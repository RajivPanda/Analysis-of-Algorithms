				/*INSERTION SORT*/

#include<conio.h>
#include<stdio.h>

void insertion(int x[],int n)
{
int i,j,no;
for(i=0;i<n-1;i++)
	{
	no=x[i+1];
	for(j=i;j>=0;j--)
		if(no<x[j])
			x[j+1]=x[j];
		else break;
	x[j+1]=no;
	}
}

void main()
{
int i,n,a[50];
clrscr();
printf("\nEnter number of terms : ");
scanf("%d",&n);
printf("\nEnter the elements : \n");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);

printf("\n\nThe elements before sorting are: \n");
for(i=0;i<n;i++)
	printf("%d ",a[i]);

insertion(a,n);

printf("\n\nThe elements after sorting are: \n");
for(i=0;i<n;i++)
	printf("%d ",a[i]);

getch();
}
