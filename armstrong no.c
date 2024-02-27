#include<stdio.h>
#include<math.h>
int main()
{
   int last,original,num,digits,sum,p;
   printf("enter the num");
   scanf("%d",&num);
   
    sum=0;
    original=num;
    digits = (int) log10(num) + 1;
	while(num>0)
	{
		last=num%10;
		p=pow(last,digits);
		sum=sum+p;
		num=num/10;
	}
	if(original==sum)
	{
		printf("armstrong no %d",original);
	}else{
		printf("not armstrong %d",original);
	}	
	
}
