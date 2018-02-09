#include<stdio.h>
#include<string.h>
int main() 
{
      char s[100];
       int i,k;
      printf("input\n");
       gets(s);
       printf("input limit\n");
       scanf("%d",&k);
       for(i=0;i<k;i++)
        {
            printf("%s",s[i]);
          }
	return 0;
}
