#include"stdio.h"
#include"stdlib.h"
int main()
{
	int i,j;
	for(i=1;i<=12;i++)
	{
	system("color b9");
	sleep(1);
		for(j=1;j<=12;j++)
		{
			system("color b3");
			printf("%5d",i*j);
			system("color c4");
			sleep(1);
		}
		system("color c1");
		printf("\n");
	}
	return 0;
}
