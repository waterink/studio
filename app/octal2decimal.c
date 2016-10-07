#include<stdio.h>

int main(void)
{
	char *poctonary = "123456";
	int n=0;
	while(*poctonary != '\0')
	{
		n=n*8+*poctonary-'0';
		poctonary++;
	}	
	printf("n= %d\n",sizeof(n));
}
