#include<stdio.h>
#include<conio.h>
#include<dos.h>
void clrscr(void);
void gotoxy(int ,int);
int main()
{
	int a[100],i,j,k,n,tmp,c,h,y=1024,x=860;
	printf("enter size of array :");
	scanf("%d",&n);
	void clrscr(void)
	{
		 printf ("\x1b[2J");
		clrscr();
	}
	printf("\n enter values to the array:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	void gotoxy(int x,int y)
	{
		 printf ("\x1b[%d;%df", y, x);
	}
	printf("unsorted values\n");
	for(j=0;j<n;j++)
	{
		printf("%d\n",a[j]);
	}
	for(c=0;c<n;c++)
	{
		for(h=0;h<n-c-1;h++)
		{
			if(a[h]>a[h+1])
			{
				tmp=a[h];
				a[h]=a[h+1];
				a[h+1]=tmp;
			}
		}
	}
	printf("sorted list is\n");
	for(k=0;k<n;k++)
	{
		void gotoxy();
		printf("%d\n",a[k]);
	}
	
	return 0;
}
