#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c;
    printf("enter the number");
    scanf("%d",&n);
    	for(i=1;i<=n;i++)
    	{
    		c=pow(2,i);
    		if(c>n)
    		{
    		printf("\noutput= %d",c);
    		break;
    		}
    	}
	return 0;
}
