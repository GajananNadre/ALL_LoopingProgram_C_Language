#include<stdio.h>
int main()
{
  int i,j;
  
  for(i=1;i<=7;i++)
  {   int k=1;
  	for(j=1;j<=7;j++)
  	{
  		if(j<=i)
  		{   
  			printf("%4d",k);
  			k=k*(i-j)/j;
		  }
	  }
	  printf("\n");
	  }	
}
