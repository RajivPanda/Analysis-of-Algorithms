			/*N-QUEEN*/

#include<conio.h>
#include<stdio.h>
int count=1;
void Print(int n,int x[][50],int *count)
{
int i,j;
printf("\nCHESSBOARD SOLUTION %d: \n\n",(*count)++);
for(i=0;i<n;i++)
       {
       for(j=0;j<n;j++)
	printf("%d ",x[i][j]);
       printf("\n");
       }
}
int Place(int x[][50],int row,int col,int n)
{
int i,j;
for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		if(x[i][j]!=0 && (i==row || j==col || abs(i-row)==abs(j-col)))
			return 0;
return 1;
}
void NQueen(int x[][50],int n,int k)
{
int i;
for(i=0;i<n;i++)
	{
	if(Place(x,k,i,n))
		{
		x[k][i]=1;
		if(k==n-1)
			Print(n,x,&count);
		else 	NQueen(x,n,k+1);
		}
	x[k][i]=0;
	}

}

void main()
{
int k,n,x[50][50]={0};
clrscr();
printf("\nEnter the value of N in N-Queen problem : ");
scanf("%d",&n);
if(n<4)
	printf("\nSolution for chessboard does not exist.");
else
	NQueen(x,n,0);
getch();
}
