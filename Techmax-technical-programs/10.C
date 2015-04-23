			/* TENNIS TOURNAMENT*/

#include<conio.h>
#include<stdio.h>
#include<math.h>
int powerof2(int n)
{
int pow=2;
while(pow<=n)
    if((double)n/pow==1)
	   return 1;
    else   pow*=2;
return 0;
}
void tennis(int x[],int max[],int n1,int n2)
{
int i,j,k;
if(n1!=1)
{
for(i=0,j=1,k=0;i<n1;i+=2,j+=2)
	{
	getch();
	max[k]=x[i]>x[j]?x[i]:x[j];
	printf("\n\nWinner of %d & %d is %d. ",x[i],x[j],max[k++]);
	}
for(i=0;i<k;i++)
	x[i]=max[i];
tennis(x,max,n1/2,n2/2);
}
}
void main()
{
int i,n1,x[100],max[10];
clrscr();
printf("\nEnter the number of players in the tournament : \n");
scanf("%d",&n1);
if(powerof2(n1)==1)
{
printf("\nEnter the values of players in the tournament : \n");
for(i=0;i<n1;i++)
	scanf("%d",&x[i]);
tennis(x,max,n1,n1/2);
}
else
	printf("\n\nTournament cannot be played.");
getch();
}
