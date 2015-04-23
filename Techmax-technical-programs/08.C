			/*MERGE SORT */


#include<conio.h>
#include<stdio.h>
void merge(int x[],int lb1,int ub1,int ub2)
{
int i=lb1,j=ub1+1,k=0,temp[50];
while(i<=ub1 && j<=ub2)
	if(x[i]<x[j])
		temp[k++]=x[i++];
	else	temp[k++]=x[j++];
while(i<=ub1)
	temp[k++]=x[i++];
while(j<=ub2)
	temp[k++]=x[j++];
for(i=lb1,j=0;i<=ub2;i++,j++)
	x[i]=temp[j];
}
void mergesort(int x[],int lb,int ub)
{
int mid;
if(lb<ub)
	{
	 mid=(lb+ub)/2;
	mergesort(x,lb,mid);
	mergesort(x,mid+1,ub);
	merge(x,lb,mid,ub);
	}
}
void main()
{
int x[50],i,n;
clrscr();
printf("\nEnter the number of terms : ");
scanf("%d",&n);
printf("\nEnter the elements : \n");
for(i=0;i<n;i++)
	scanf("%d",&x[i]);

printf("\nElements before sorting are : \n");
for(i=0;i<n;i++)
	printf("%d ",x[i]);

mergesort(x,0,n-1);

printf("\nElements after sorting are : \n");
for(i=0;i<n;i++)
	printf("%d ",x[i]);


getch();
}
