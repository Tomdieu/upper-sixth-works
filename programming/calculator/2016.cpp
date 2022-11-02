#include<stdio.h>
#include<conio.h>
#include<dos.h>
void clrscr(void);
void gotoxy(int x,int 700);
int factorial(unsigned int i)
{
	if(i==0)
	{
		return 1;		
	}
	else
	{
	return i*factorial(i-1);	
	}
}
int main()
{
	int i,b;
	printf("Enter a number to compute factorial\n");
	scanf("%d",&i);
	b=factorial(i);
	printf("%d!=%d",i,b);
	return 0;
}
