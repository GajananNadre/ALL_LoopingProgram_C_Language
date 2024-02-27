#include<stdio.h>
int main()
{
	int no,rem,p=1;
	printf("enter the no\n");
	scanf("%d",&no);
	
	while(no!=0)
	{
		rem=no%10;
		p=p*rem;
		no=no/10;
	}
	printf("%d",p);
}
