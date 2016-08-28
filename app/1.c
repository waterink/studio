#include<stdio.h>
#include <stdlib.h>
int getmemory(int *p,int data)
{
	int a,b;
	p=(int *)malloc(100);
	printf("%p\n",p);
	//strcpy(p,"helloworld");
	return 0;
}

int main(void)
{
	int *p=NULL;
	char a = 0;
	int b = 0;
	int c[5] = {1,2,3,4,5};
	int d[2][3] = {{1,2,3},{4,5,6}};
	p=c;
	printf("point address p=%p *p=%d &p=%p  size = %ld\n",p,*p,&p,sizeof(&p));
	printf("char address a=%p	size = %ld\n",&a,sizeof(a));
	printf("int  address b=%p	size = %ld\n",&b,sizeof(b));
	printf("array address c=%p	size = %ld\n",c,sizeof(c));
	printf("array address &c=%p	size = %ld\n",c,sizeof(&c));
	printf("array address *c=%d	*(&c+1) = %d\n",*(c+1),*(&c+1));
	printf("array address d=%p	size = %ld\n",d,sizeof(d));
	printf("array address &d=%p	size = %ld\n",d,sizeof(&d));
	printf("function address getmemory=%p	size = %ld\n",getmemory,sizeof(getmemory));
	printf("function address &getmemory=%p	size = %ld\n",&getmemory,sizeof(&getmemory));
	printf("function address *getmemory=%p	size = %ld\n",*getmemory,sizeof(*getmemory));
	printf("Hello World!\n");
	printf("Hello World!\n");
	return 0;	
}
