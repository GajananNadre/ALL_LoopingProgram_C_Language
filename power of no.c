#include<stdio.h>
int main()
{
	int i=1,base,index,p=1;
	printf("enter the base and index\n");
	scanf("%d %d",&base,&index);
	
	while(i<=index)
	{
		p=p*base;
		i++;
	}
	printf("power of no is %d",p);
}
