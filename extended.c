#include <stdio.h>
#include <math.h>
int main()
{
	int t=0;
	int	s=1;
	int	x=0;
	int	q=0;
	int	n;
	int	r=0;
	int te=0;
	int i=0;
	
	printf("Enter x(e): ");
	scanf("%d",&x);
	printf("Enter n(fly n): ");
	scanf("%d",&n);
	
	

while(x>0) {
	q = n/x; 
	r = n - (q*x); 
	n = x; 
	x = r;
	te = t - (q*s); 
	t = s; 
	s = te;
	i++; //count
	printf("--------Round: %d --------\n",i);
	printf("n[%d]: %d \n",i,n);
	printf("x[%d]: %d \n",i,x);
	printf("q[%d]: %d \n",i,q);
	printf("r[%d]: %d \n",i,r);
	printf("t[%d]: %d \n",i,t);
	printf("s[%d]: %d \n",i,s);
	printf("te[%d]: %d \n",i,te);
}

if( n == 1) 
{
	return t;
}
else
{
	return 0;
 } 

return 0;
}
