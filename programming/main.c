#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define pi 3.1415926535
#define g 10 
char ans;
double ang1,ang2,teta,x,y,u,t,R,H;
int main(int argc, char *argv[]) 
{
	do
	{
		system("cls");
	printf("\t\tProjectiles calculator\n");
	printf("\n1-Time of flight && total time of flight \n");
	printf("\n2-Range of the projection\n");
	printf("\n3-Maximum height of the projection\n");
	printf("\n4-Angles of projection\n");
	printf("\n5-Distance horizontal and vertical");
	ans=getch();
	if(ans=='1')
	{
	do
	{
		system("cls");
		printf("1-Time of flight\n");
		printf("2-Total time of flight\n");
		printf("3-Exit\n");
		ans=getch();
		if(ans=='1')
		{
			system("cls");
			printf("Enter the speed of the projecton \n");
			scanf("%lf",&u);
			printf("Enter the angle of projection \n");
			scanf("%lf",&teta);
			t=((u)*sin(teta*(pi/180)))/g;
			printf("The time to reach maximum height is %.2lfs",t);getch();
		}
		if(ans=='2')
		{

			system("cls");
			printf("Enter the speed of the projecton \n");
			scanf("%lf",&u);
			printf("Enter the angle of projection \n");
			scanf("%lf",&teta);
			t=2*(((u)*sin(teta*(pi/180)))/g);
			printf("The time of flight is %.2lfs",t);getch();
		}
	}while(ans!='3');
}
if(ans=='2')
{
	system("cls");
	printf("Enter the speed of the projecton \n");
			scanf("%lf",&u);
			printf("Enter the angle of projection \n");
			scanf("%lf",&teta);
			ang1=sin(teta*(pi/180));
			ang2=cos(teta*(pi/-180));
			R=((2*ang1*ang2)*(u*u))/g;
			printf("The range is %.2lfm",R);getch();
}
if(ans=='3')
{
	system("cls");
	printf("Enter the angle of projection \n");scanf("%lf",&teta);
	printf("Enter the speed of projection \n");scanf("%lf",&u);
	H=((u*u)*pow(sin(teta*(pi/180)),2))/(2*g);
	printf("The maximum hieght of the projection is %.2lfm",H);
	getch();
}
if(ans=='4')
{
	double tan,tan1,po;
  system("cls");
  printf("Enter the Horizontal distance \n");scanf("%lf",&x);
  printf("Enter the Vertical distance \n");scanf("%lf",&y);
  printf("Enter the speed of the projection\n");scanf("%lf",&u);
  getch();
}
if(ans=='5')
{
	
}
}while(ans!='6');
	return 0;
}
