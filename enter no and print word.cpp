#include<stdio.h>
int main()
{
	int num,rev=0,rem;
	printf("enter the number");
	scanf("%d",&num);
	
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("%d\n",rev);
	
	while(rev!=0)
	{
		switch(rev % 10)
		{
			case 0:printf("zero ");break;
			case 1:printf("one ");break;
			case 2:printf("two ");break;
			case 3:printf("three ");break;
			case 4:printf("four ");break;
			case 5:printf("five ");break;
			case 6:printf("six ");break;
			case 7:printf("seven ");break;
			case 8:printf("eight ");break;
			case 9:printf("nine ");break;
		}
		rev=rev/10;
	}
	
}

