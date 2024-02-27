#include<stdio.h>
int main()
{
	int i,j,k=0;
	 for (i=1;i<=5;i++)
	 {  int count=1;
	 	for(j=1;j<=9;j++)
	 	{
	 		if(j<=9-k)
	 		{   if(j<6-i){
	 			printf("%d",count++);
				 }
	 			else
	 			{
	 				printf("%d",count--);
				 }
			 }
		 }
		 k=k+2;
		 printf("\n");
	 }
}
