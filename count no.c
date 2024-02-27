#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter the no\n");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		count++;
	}
printf("count no of digit is %d\n",count);
}
