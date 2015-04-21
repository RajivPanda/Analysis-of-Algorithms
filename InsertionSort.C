#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100];
	int i,j,k,size,temp;
	clrscr();
	printf("Insertion Sort\n");
	printf("\nEnter the size of the array:");
	scanf("%d",&size);
	printf("Enter the elements into the array:");
	for(i=0; i<size; i++)
		scanf("%d",&arr[i]);
	printf("\nArray before Sorting:\n");
	for(i=0; i<size; i++)
		printf("%d\t",arr[i]);
	for(i=1; i<size; i++)
	{
		for(j=0; j<i; j++)
		{
			if(arr[j]>arr[i])
			{
				temp=arr[j];
				arr[j]=arr[i];
				for(k=i;k>j;k--)
					arr[k]=arr[k-1];
				arr[k+1]=temp;
			}
		}
	}
	printf("\n\nArray after sorting:\n");
	for(i=0; i<size; i++)
		printf("%d\t",arr[i]);
	getch(); 

}
/*
OUTPUT:
Insertion Sort

Enter the size of the array:5
Enter the elements into the array:25 17 31 13 2

Array before Sorting:
25	17	31	13	2	

Array after sorting:
2	13	17	25	31
*/
