#include <stdio.h>
int main()
{
	int a,b,c;
	printf("inpus\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	c=a-b;
	else
	c=b-a;
	if(c%2==0)
	printf("even");
	else
	printf("odd");
	return 0;
}
