#include <stdio.h>
int main()
{
     int a;
     printf("input\n");
     scanf("%d",&a);
     if(a%10==0)
     printf("%d");
     else
     {
     while(a%10!=0)
     {
     	a++;
     	if(a%10==0)
     	{
     		printf("output=%d",a);
     		break;
     	}
     }
     }
      
	return 0;
}
