#include<stdio.h>
int main()
{
	int no,sum,last,first;
	printf("enter the no\n");
	scanf("%d",&no);
	
	last=no%10;
	
	while(no>=10)
	{
		no=no/10;
		
	}
	first=no;
	sum=last+first;
	printf("last is %d\n",last);
	printf(" first  %d\n",first);
	printf("sum of first and last is %d",sum);
}
