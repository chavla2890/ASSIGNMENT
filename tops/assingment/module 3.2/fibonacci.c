#include<stdio.h>
void main()
{
	int i,n1=0,n2=1,number,n3;
	printf("enter the number:\n");
	scanf("%d",&number);
	printf("\n%d %d ",n1,n2);
	for(i=2;i<number;++i)
	{
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
		
	}
	
}