
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=11;j++)
		{
			if((j<=6-i || j>=6+i)&&i<=5)
			{
				printf("*");
			}
			else if((j<=i-5||j>=17-i)&&i>5)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
