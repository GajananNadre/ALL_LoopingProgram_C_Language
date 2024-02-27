#include<stdio.h>
int main()
{
	int f1=0,f2=1,fib,i=1,limit;
	printf("enter the limit");
	scanf("%d",&limit);
	printf("%d\t%d\t",f1,f2);
	
	 while(i<limit)
	 {
	 	fib=f1+f2;
	 	f1=f2;
	 	f2=fib;
	 	printf("%d\t",fib);
	 	i++;
	 }
}
