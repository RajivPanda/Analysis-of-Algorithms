			/*LONGEST COMMON SUBSEQUENCE (LCS)*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j,k=0,big,small,l1,l2,lcs[50][50]={0},result[10];
char *s1,*s2,*s,arrow[50][50];
clrscr();
printf("\nEnter String 1 : ");
gets(s1);
printf("\nEnter String 2 : ");
gets(s2);
l1=strlen(s1);
l2=strlen(s2);
if(l1>=l2)
	{
	strcpy(s,s1);          //bigger string in s
	big=l1;
	small=l2;
	}
else
	{
	strcpy(s,s2);          //bigger string in s
	big=l2;
	small=l1;
	}
//Main Algorithm
for(i=0;i<=big;i++)
	for(j=0;j<=small;j++)
		if(s1[i]==s2[j])       //characters same
			{
			 lcs[i+1][j+1]=lcs[i][j]+1;  //value=diag. value+1
			 arrow[i+1][j+1]='d';       //diagonal arrow
			}
		else if(lcs[i+1][j]==lcs[i][j+1] || lcs[i][j+1]>lcs[i+1][j])
			{
			 lcs[i+1][j+1]=lcs[i][j+1]; //value=upper value
			 arrow[i+1][j+1]='u';       //upper arrow
			}
		     else
			{
			 lcs[i+1][j+1]=lcs[i+1][j]; //value=left value
			 arrow[i+1][j+1]='l';       //left arrow
			}
printf("\nComputational Table : \n\n");
for(i=0;i<=big;i++)
	{
	for(j=0;j<=small;j++)
		if(i==0)  //if '0'th row & column
			printf("%d   \t",lcs[i][j]);
		else	printf("%d %c\t",lcs[i][j],arrow[i][j]);
	printf("\n");
	}
//for backtracking set value of i & j
i=big;
j=small;

while(lcs[i][j]!=0)
		if(arrow[i][j]=='u') //if upper arrow
			i--;         //go up
		else       if(arrow[i][j]=='l')   //if left arrow
				j--;              //go left
			   else
				{
				result[k++]=i-1; //keep track of diag. values
				i--;j--;         //go diagonally up
				}
printf("\nThe Lowest Common Subsequence is : \n");
//decrement k as it is incremented 1 time while keeping track of diag. values
k--;
while(k>=0)
	printf("%c ",s[result[k--]]);

getch();
}
