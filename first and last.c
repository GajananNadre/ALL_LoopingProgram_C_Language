 #include<stdio.h>
#include<math.h>
int main()
{
	int no,first,last;
	printf("enter the no\n");
	scanf("%d",&no);
	last=no%10;
		while(no>=10)
		{
		   no=no/10;
        }
	first=no;
	printf("last=%d first=%d",last,first);
}
