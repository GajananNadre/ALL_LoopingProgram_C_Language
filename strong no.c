#include<stdio.h>
int main()
{
	int last,num,fact,sum,i,original;
	printf("enter the no");
	scanf("%d",&num);
	
	original=num;
	sum=0;
	i=1;
	while(num>0)
	{
		last=num%10;		
		fact=1;	
		for(i=1;i<=last;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		num=num/10;
	}
	if(sum==original)
	{
		printf("strong  %d",original);
	}else{
		printf("not strong %d",original);
	}
}
