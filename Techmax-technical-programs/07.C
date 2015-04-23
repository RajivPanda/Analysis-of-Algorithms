			/*QUICK  SORT*/

#include<conio.h>
#include<stdio.h>

void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}

int partition(int a[],int lb,int ub)
{
int pivot=lb,i;
for(i=lb+1;i<=ub;i++)
	if(a[i]<a[lb])
		{
		pivot++;
		swap(&a[i],&a[pivot]);
		}
swap(&a[lb],&a[pivot]);
return pivot;
}

void quicksort(int a[],int lb,int ub)
{
int p;
if(lb<ub)
	{
	p=partition(a,lb,ub);
	quicksort(a,lb,p-1);
	quicksort(a,p+1,ub);
	}
}

void main()
{
int a[10],i,n;
clrscr();
printf("\nEnter the number of elements : ");
scanf("%d",&n);
printf("\nEnter the elements : ");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);

printf("\nThe elements before sorting are : \n");
for(i=0;i<n;i++)
	printf("%d ",a[i]);
quicksort(a,0,n-1);

printf("\nThe elements after sorting are : \n");
for(i=0;i<n;i++)
	printf("%d ",a[i]);

getch();
}
