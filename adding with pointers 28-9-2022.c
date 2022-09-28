#include<stdio.h>
int main(){
	int first,second,*p,*q,sum;
	printf("enter the numbers to added :\n");
	scanf("%d%d",&first,&second);
	p=&first;
	q=&second;
	sum=*p+*q;
	printf("sum of the two numbers :%d",sum);
	return 0;
}
