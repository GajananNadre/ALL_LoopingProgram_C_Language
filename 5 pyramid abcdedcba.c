#include<stdio.h>
int main()
{
	int i,j,ch='A';
	
	for(i=1;i<=5;i++)
	{    ch='A';
		for(j=1;j<=9;j++)
		{
			if(j<=6-i||j>=4+i)
			{printf("%c",ch);
				j<5?ch++:ch--;
			}
			else
			{
				printf(" ");
				if(j==5)
				{ch--;
				}
			}
		}
		printf("\n");
	}
}
