#include<stdio.h>
#include<conio.h>
void main()
{
	int n,d,s,r;
	clrscr();
	printf("enter the number: ");
	scanf("%d",&n);
	s=r=0;
	while(n!=0)
	{
		d=n%10;
		s+=d;
		r=r*10+d;
		n=n/10;
	}
	printf("\nsum=%d",s);
	printf("\nreverse=%d",r);
	getch();
}