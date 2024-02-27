#include<stdio.h>
int main()
{
	int no,rev=0,original,rem;
	printf("enter the no\n");
	scanf("%d",&no);
	
	original=no;
	
	while(no !=0)
	{
		rem=no%10;//3
		rev=rev*10+rem;//
		no=no/10;
	}
	if(original==rev)
	{
		printf("no is palimdrome %d \n",original);
	}else{
		printf("no is not palimdrome %d\n",original);
	}

	
	
}
