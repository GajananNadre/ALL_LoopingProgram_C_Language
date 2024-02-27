#include<stdio.h>
int main()
{
	int i,j,num,count;
	printf("enter the number\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
	    count=1;
		for(j=2;j<=i/2;j++)
		{
		    if(i%j==0)
			{
				count=0;
				break;
			}
		}
		if(count)
		{
			printf("%d\n",i);
		}
	}
}
