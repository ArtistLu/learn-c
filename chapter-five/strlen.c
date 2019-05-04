#include <stdio.h>
#define MAXLEN 1000

int strlen(char *s);

int main()
{
	char s[MAXLEN];
	
	printf("please write a string\n");
	scanf("%s", s);
	printf("%d\n", strlen(s));
	return 0;
}

int strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		p++;
	}
	

	printf("this is custom strlen function\n");
	return p - s;
}
