#include <stdio.h>

int main()
{
	
	int y=1,i=0,x,num,n;
	int k[12];
	int j=0;
	
	printf("Enter N: ");
	scanf("%d",&n);
	printf("Enter X: ");
	scanf("%d",&x);
	printf("Enter numOfBit: ");
	scanf("%d",&num);
	
	printf("Choose 0 or 1 and You pls Choose from LSB bit\n");
	for(j=0; j<num; j++)
	{
		printf("Enter Your K[%d] : ",j);
		
		scanf(" %d",&k[j]);
		
	}
	
	
	for(i=0; i<num; i++)
	{
		printf("---------Round[%d]----------\n",i+1);
		if(k[i]==1)
		{
			y = (x*y)%n;
			printf("Y: %d\n",y);
		}
		x = (x*x)%n;
		
		
		printf("X: %d\n",x);
	}
	return 0;
}
