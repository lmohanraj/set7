#include<stdio.h>
#include<string.h>
int main() 
{
      char s[100];
       int i,k,count=0;
      printf("input\n");
       gets(s);
       k=strlen(s);
       for(i=0;i<k;i++)
        {
           if((s[i]!='1')&&(s[i]!='0'))
           count++;
        	
        }
        if(count==0)
        printf("yes");
        else
        printf("no");
	return 0;
}
