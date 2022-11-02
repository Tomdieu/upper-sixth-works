#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int i,j=0;
	int t;
	float s,a,b;
	getch();
	do
	{
	                   
	printf("1:/\n");
	printf("2:*\n");
	printf("3:+\n");
	printf("4:-\n");
	printf("5:clear screen\n");
	scanf("%f%f",&a,&b);
	scanf("%d",&t);
	switch(t)
	{
		case 3:
	s=a+b;
	printf("%.2f+%.2f=%.2f\n",a,b,s);
	printf("\n");
	break;
	case 2:
	s=a*b;
	printf("%.2f*%.2f=%.2f\n",a,b,s);
	printf("\n");
	break;
	case 1:
	s=a/b;
	printf("%.2f/%.2f=%.2f\n",a,b,s);
	printf("\n");
	break;
	case 4:
	s=a-b;
	printf("%.2f-%.2f=%.2f\n",a,b,s);
	printf("\n");
	break;
	case 5:
	system("cls");
	default:
	printf("invalid command\n ");	
	}
}
while(j!=1);
	return 0;
}
