#include<stdio.h>
int main()
{
	int i=1,n,sumo=0;
	printf("enter the no\n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		{
			sumo=sumo+i;
		}
	i++;
	}
	printf("sum of odd no is %d\n",sumo);
}
