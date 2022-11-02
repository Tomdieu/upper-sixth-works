#include<stdio.h>
#include<math.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>
float a,b,c,d,x1,x2,e;
char u[30],t;
int main()
{
	printf("Enter your name \b: ");
	scanf("%s",&u);   
system("pause");

do
{
	system("cls");
    printf("        WELCOME %s\n",u);
    printf("--------------------------------------------------------------------\n");
    printf("|                  MY QUADRATIC CALCULATOR                         |\n");
    printf("|                                                                  |\n");
    printf("|                                                                  |\n");
    printf("|   Authour: Tomdieu ivan                                          |\n");
    printf("|                                                  copyright(2019) |\n");
    printf("--------------------------------------------------------------------\n");
    printf("this program perform quadratics equation of the form  ax²+bx+c=0 \n ");
	printf("enter a : ");
	scanf("%f",&a);
    printf("enter b : ");
	scanf("%f",&b);
    printf("enter c : ");
	scanf("%f",&c);
	d=b*b-(4*a*c);
	if (d==0)
	{
		printf("using the formular  ");
		printf(" b*b-4*a*c = 0\n");
		printf("the equation has equal roots \n which are \n: ");    /* for equal roots*/ 
		x1=(-b+(sqrt(d)))/(2*a);
		x2=(-b-(sqrt(d)))/(2*a);
		printf("\nx1= %.2f\n",x1);
		printf("x2=%.2f\n",x2);
		system("pause");
	}
	if ( d < 0)
	{
		printf("using the formular \n ");
		printf(" b*b-4*a*c < 0 \n");
		printf("the equation has complex roots \n which means it has no solution \n"); /*complex roots*/
		printf("%.2f*%.2f-4*%.2f*%.2f=%.2f\n",b,b,a,c,d);
		system("pause");
    }
	else if (d>0)
	{
		printf(" using the formular below the equation has real and distinct roots which are \n: "); /*real and distinct roots*/
		printf(" b*b-4*a*c > 0\n");
		printf("%.2f*%.2f-4*%.2f*%.2f=%.2f\n",b,b,a,c,d);
		printf("\n");
        x1=(-b+(sqrt(d)))/(2*a);
		x2=(-b-(sqrt(d)))/(2*a);
		printf("x1= %.2f\n",x1);
		printf("x2=%.2f\n",x2);
		system("pause");
	}
}while(t!=1);
getch();
}
