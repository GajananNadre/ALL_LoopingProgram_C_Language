//3
//44
//555
//6666
//555
//44
//3
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(i>=j&&i<=4)
			{
				printf("%d",i+2);
			}
			else if(j<=8-i&&i>4)
			{
				printf("%d",10-i);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
