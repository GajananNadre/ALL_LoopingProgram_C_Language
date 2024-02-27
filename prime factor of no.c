#include<stdio.h>
int main()
{
	int i,j,num,count;
	printf("enter the number\n");
	scanf("%d",&num);
	
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
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
		if(count==1)
		{
			printf("%d\n",i);
		}
	    }
	}
	
}
