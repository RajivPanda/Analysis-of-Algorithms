#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],b[100],c[200];
	int i,j,k,temp,size=5;
	clrscr();
	printf("Merge sort.\n\n");
	printf("Enter the size of the arrays:");
	scanf("%d",&size);
	printf("Enter elements into first array:");
	for(i=0; i<size; i++)
		scanf("%d",&a[i]);
	printf("Enter elements into second array:");
	for(i=0; i<size; i++)
		scanf("%d",&b[i]);
	printf("First array:\n");
	for(i=0; i<size; i++)
		printf("%d\t",a[i]);
	printf("\n\nSecond array:\n");
	for(i=0; i<5; i++)
		printf("%d\t",b[i]);
	for(i=0; i<size-1; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	for(i=j=k=0; i<(2*size);)
	{
		if(a[j]<=b[k])
			c[i++]=a[j++];
		else
			c[i++]=b[k++];
		if(j==size||k==size)
			break;
	}
	while(j<size)
		c[i++]=a[j++];
	while(k<size)
		c[i++]=b[k++];

	printf("\n\nArray after sorting:\n");
	for(i=0; i<(2*size); i++)
		printf("%d\t",c[i]);
	getch();
}
/*
OUTPUT:
Merge sort.

Enter the size of the arrays:5           
Enter elements into first array:11 2 9 13 57
Enter elements into second array:25 17 1 90 3
First array:
11	2	9	13	57	

Second array:
25	17	1	90	3	

Array after sorting:
1	2	3	9	11	13	17	25	57	90
*/
