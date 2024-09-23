//to find sum of first n even numbers
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,s;
	printf("enter n values");
	scanf("%d%d%d",&i,&n,&s);
	i=0;
	do
{
	s=s+i;
	i=i+2;
}while(i<=n);
	printf("%d is the sum of first even numbers",s);
	getch();
}
