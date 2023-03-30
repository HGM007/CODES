#include<stdio.h>
#include<stdlib.h>

struct Tp
{
	int day;
	int h;
	int m;
	int s;
}d1,d2,d3,D;
int main()
{
	printf("etr time 1\n");
	scanf("%d%d%d",&d1.h,&d1.m,&d1.s);
	
	printf("etr time 2\n");
	scanf("%d%d%d",&d2.h,&d2.m,&d2.s);
	
//	d3.h=d1.h-d2.h;
//	d3.m=d1.m-d2.m;
//	d3.s=d1.s-d2.s;
	if(d1.h>d2.h)
	{
		d2.h+=24;
		--D.day;
	}
	
	if(d1.m>d2.m)
	{
	
		d2.m+=60;
		--d2.h; 
	}
	if(d1.s>d2.s)
	{
		d2.s+=60;
		--d2.m;
	}
	d3.h=d2.h-d1.h;
	d3.m=d2.m-d1.m;
	d3.s=d2.s-d1.s;
	
	printf("Difference in TP is %d:%d:%d:%d",D.day,d3.h,d3.m,d3.s);
	return 0;
}

