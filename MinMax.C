#include<stdio.h>
#include<conio.h>
void main()
{
	int i,min,max,num,arr[100];
	clrscr();
	printf("Enter the size of the array:");
	scanf("%d",&num);
	printf("Enter the Elements into the array:");
	for(i=0; i<num; i++)
		scanf("%d",&arr[i]);
	min=max=arr[0];
	for(i=0; i<num; i++)
	{
		if(arr[i]<min)
			min=arr[i];
		if(arr[i]>max)
			max=arr[i];
	}
	printf("\n%d is maximum \n%d is minimum",min,max);
	getch();
}
/*
OUTPUT:
Enter the size of the array:5
Enter the Elements into the array:18 45 139 169 44

18 is maximum 
169 is minimum
*/
