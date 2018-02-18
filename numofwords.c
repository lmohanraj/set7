#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,c=1;
	char s[100];
	printf("input\n");
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]==' ')
		c++;
	}
	printf("number of words=%d",c);
	return 0;
}
