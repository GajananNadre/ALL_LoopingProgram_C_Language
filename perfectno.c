#include<stdio.h>
int main()
{
	int num,sum,i;
	printf("enter the no");
	scanf("%d",&num);
	
	sum=0;
	i=1;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
	    }
	}
	if(num==sum &&num>0)
	{
		printf("number is perfect");
	}else{
		printf("number is not perfect");
	}
}
