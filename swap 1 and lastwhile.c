#include<stdio.h>
#include<math.h>
int main()
{
	int no,last,first,count=0,original,p,p1;
	printf("enter the no");
	scanf("%d",&no);
	
    original=no;
	while(no!=0)
	{
		no=no/10;
		++count;
	}
	no=original;
	last=no%10;
	p= pow(10,--count);
	first=no/p;
	no=no/10;
	p1=pow(10,--count);
	no=no%p1;
	no=last*p+no*10+first;
	
	printf("%d",no);
	
	
}

