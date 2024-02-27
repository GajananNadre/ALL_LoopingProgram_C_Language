#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{  int temp=1;
		for(j=1;j<=10;j++)
		{
			if(j<=i&&j<=5)
			{
			printf("%d",temp++);
			}
			else if(j>=11-i&&j>=5)
			{
			printf("%d",--temp);	
			}
			
			else
			{
				printf(" ");
				
			}
        }
	   printf("\n"); 
    }
}
