#include<stdio.h>
int main()
{
	int i,j,count,temp;
	char ch;
	for(i=1;i<=5;i++)
	{  count=65;
		for(j=1;j<=9;j++)
		{
			if(j>=6-i&&j<=5)
			{
				printf("%c",count);
				count++;
				temp=count-2;
			}
			else if(j<=4+i&&j>5)
			{
				printf("%c",temp);
				temp--;
			}
		}
		printf("\n");
	}
}
