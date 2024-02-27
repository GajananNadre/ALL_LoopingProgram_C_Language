#include<stdio.h>
int main()
{
	int no,i=1;
	printf("enter the no\n");
	scanf("%d",&no);
	
	while(i<=no)
	{
		if(no%i==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	
}
