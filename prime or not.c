#include<stdio.h>
int main()
{
	int no,i,count=1;
	printf("enter the no\n");
	scanf("%d",&no);
	
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			count=0;
			break;
		}
	}
	if(count==1 &&no>1)
	{
		printf(" prime no%d\n",no);
	}else{
		printf("not prime %d",no);
	}
}
