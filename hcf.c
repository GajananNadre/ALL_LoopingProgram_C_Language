#include<stdio.h>
int main()
{
	int no1,no2,hcf,i=1;
	printf("enter the two no");
	scanf("%d %d",&no1,&no2);
	
	while(i<=no1 && i<=no2)
	{
		if(no1%i==0 && no2%i==0)
		{
			hcf=i;
		}
		i++;
	}
	printf("no1=%d no2=%d %d",no1,no2,hcf);
}
