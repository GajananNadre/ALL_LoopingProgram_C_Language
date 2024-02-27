#include<stdio.h>
int main()
{
	int i,j,a,b;
	
	for(i=1;i<=5;i++)
	{     a=i;
		for(j=1;j<=9;j++)
		{
			if(j>=6-i && j>=6)
			{
				printf("%d",a);
				a++;
                j<5?a++:--a;
                
			}else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}
