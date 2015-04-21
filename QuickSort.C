#include<stdio.h>
#include<conio.h>
void quicksort(int*, int, int);
int split(int*, int, int);			//Can be named "partition" also
int main()
{
	int arr[100];
	int i,size,temp;
	clrscr();
	printf("Quick Sort\n");
	printf("\nEnter the size of the array:");
	scanf("%d",&size);
	printf("Enter the elements into the array:");
	for(i=0; i<size; i++)
		scanf("%d",&arr[i]);
	printf("\nArray before Sorting:\n");
	for(i=0; i<size; i++)
		printf("%d\t",arr[i]);

	quicksort(arr,0,size-1);		//Quick-Sort Function Call

	printf("\n\nArray after sorting:\n");
	for(i=0; i<size; i++)
		printf("%d\t",arr[i]);
	getch(); 
return 0;
}

void quicksort(int a[], int lower, int upper)
{
	int i;
	if(upper>lower)
	{
		i=split(a, lower, upper);
		quicksort(a, lower, i-1);
		quicksort(a, i+1, upper);
	}
}

int split(int a[], int lower, int upper)	//Can be named "partition" also
{
	int i,p,q,t;
	p=lower+1;
	q=upper;
	i=a[lower];
	while(q>=p)
	{
		while(a[p]<i)
			p++;
		while(a[q]>i)
			q--;
		if(q>p)
		{
			t=a[p];
			a[p]=a[q];
			a[q]=t;
		}
	}
	t=a[lower];
	a[lower]=a[q];
	a[q]=t;
	
	return q;
}
/*
OUTPUT:
Quick Sort

Enter the size of the array:10
Enter the elements into the array:11 2 9 13 57 25 17 1 90 3

Array before Sorting:
11	2	9	13	57	25	17	1	90	3	

Array after sorting:
1	2	3	9	11	13	17	25	57	90
*/
