#include<stdio.h>
int main()
{
	int num,sum,i,j,count;
	printf("enter the no");
	scanf("%d",&num);
	
	for(i=1;i<num;i++)
	{
		count=i;
		sum=0;
		for(j=1;j<i;j++)
		{
	
		if(i%j==0)
		{
			sum=sum+j;
			
	    }
	}
	if(count==sum)
	{
		printf(" %d ",i);
	}
	
	}
	

}
