#include<stdio.h>
#include<conio.h>
int main()
{int z,r;
	do
	{
		r=rand()%10;
		printf("%d\n",r);
	}while(z!=1);
}
main() 
{ 
   FILE *fp; 
 
   fp = fopen("/tmp/test.txt", "w+"); 
   fprintf(fp, "This is testing for fprintf...\n"); 
   fputs("This is testing for fputs...\n", fp); 
   fclose(fp); 
} 
