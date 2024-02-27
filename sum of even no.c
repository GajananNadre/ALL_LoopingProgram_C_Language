#include<stdio.h>
int main()
{
	int i=1,n,sume=0;
	printf("enter the no\n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			sume=sume+i;
		}
	i++;
	}
	printf("sum of even no is %d\n",sume);
}
