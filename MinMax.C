#include<stdio.h>
#include<conio.h>
void minmax(int a[],int lb,int ub,int *min,int *max)
{
int mid,min1,max1;
if(lb==ub)
	*min=*max=a[lb];
else if(lb==ub-1)
		if(a[lb]>a[ub])
			{
			*max=a[lb];
			*min=a[ub];
			}
		else
			{
			*max=a[ub];
			*min=a[lb];
			}
      else
	       {
	       mid=(lb+ub)/2;
	       minmax(a,lb,mid, min,max);
	       minmax(a,mid+1,ub,&min1,&max1);
	       if(max1>*max)
			*max=max1;
	       if(min1<*min)
			*min=min1;
	       }

}

void main()
{
int n,a[50],min,max,lb,ub;
clrscr();
printf("\nEnter the size of the array : ");
scanf("%d",&n);
printf("\nEnter the elements into the array: \n");
for(lb=0;lb<n;lb++)
	scanf("%d",&a[lb]);
lb=0;  //lower bound of the array
ub=n-1;   //upper bound of the array
minmax(a,lb,ub,&min,&max);
printf("\n%d is minimum \n%d is maximum",min,max);
getch();
}
/*
OUTPUT:
Enter the size of the array:5
Enter the Elements into the array:18 45 139 169 44
18 is minimum 
169 is maximum
*/
