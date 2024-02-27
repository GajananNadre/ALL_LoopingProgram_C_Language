#include<stdio.h>
int main()
{
	int i=1,N;
	printf("multiplication table of \n\n");
	printf("enter the no is \n");
	scanf("%d",&N);
	
	while(i<=10)
	{
		
		printf("%d \n", i*N);
		i++;
	}
	
}
