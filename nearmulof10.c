#include <stdio.h>
int main()
{
     int a,c;
     printf("input\n");
     scanf("%d",&a);
     if(a%10==0)
     {
	     c=a+10;
	     printf("%d",c);
     }
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
