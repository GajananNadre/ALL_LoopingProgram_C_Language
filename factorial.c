#include<stdio.h>
int main()
{
	long int no,i=1,f=1;
	printf("enter the no is");
	scanf("%ld",&no);
	
	while(i<=no)
	{
	     f=f*i;
	     i++;
	}
	printf("%ld %ld",no,f);
}
