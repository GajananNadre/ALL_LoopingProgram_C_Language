#include<stdio.h>
int main()
{
	int no,rem,sum=0;
	printf("enter the no\n");
	scanf("%d",&no);
	
	while(no!=0)
	{
		rem=no%10;
		sum=sum+rem;
		no=no/10;
	}
	printf("%d",sum);
}
