#include<stdio.h>

int main(){
	int x = 1, y = 2;
	int *ip;
	ip = &x;

	printf("x: %d\n",x);
	printf("y: %d\n",y);
	printf("ip: %p, *ip: %d\n",ip,*ip);

	y = *ip;
	
	printf("x: %d\n",x);
	printf("y: %d\n",y);
	printf("ip: %p, *ip: %d,\n",ip,*ip);
	
	x = ip;
	
	printf("x: %d\n",x);
	printf("y: %d\n",y);
	printf("ip: %p, *ip: %d, \n",ip,*ip);

	*ip = 3;

	printf("x: %d\n",x);
	printf("y: %d\n",y);
	printf("ip: %p, *ip: %d,\n",ip,*ip);

	*ip = y;

	printf("x: %d\n",x);
	printf("y: %d\n",y);
	printf("ip: %p, *ip: %d\n",ip,*ip);

	y = 20;

	printf("x: %d\n",x);
	printf("y: %d\n",y);
	printf("ip: %p, *ip: %d\n",ip,*ip);

	ip = &y;

	printf("x: %d\n",x);
	printf("y: %d\n",y);
	printf("ip: %p, *ip: %d\n",ip,*ip);

	x = *ip;

	printf("x: %d\n",x);
	printf("y: %d\n",y);
	printf("ip: %p, *ip: %d\n",ip,*ip);

	y = 2323;

	printf("x: %d\n",x);
	printf("y: %d\n",y);
	printf("ip: %p, *ip: %d\n",ip,*ip);

	*ip = 120;

	printf("x: %d\n",x);
	printf("y: %d\n",y);
	printf("ip: %p, *ip: %d\n",ip,*ip);

	ip = 
	return 0;
}
