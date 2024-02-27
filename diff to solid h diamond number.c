#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=7;j++)
		{
		   if((j<=(i*2)-1)&&i<=5)
            {
            if(j%2==0)
            {
            	printf("*");
			}else
			{
				if(i==5)
				{
					printf("%d",i-1);
				}
				else
				{
					printf("%d",i);
				}
			}
			}
	}
	printf("\n");
}
}
