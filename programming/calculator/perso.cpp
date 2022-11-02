#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{
 float a,b,c,d,fact=1,fa=1,i,j,l,f=1,z;
 char e;
 printf(" operation available \n +,*,/,-,^,npr,ncr \n ");
 do
 {
 	printf(">>>");
  scanf("%f%c%f",&a,&e,&b);
  switch(e)
  {
   case '+':
   c=a+b;
   printf("\n");
   break;
   case'*':
   c=a*b;
   printf("\n");
   break;
   case'/':
   c=a/b;
   printf("\n");
   break;
   case'-':
   c=a-b;
   printf("\n");
   break;
   case'^':
   c=pow(a,b);
   printf("\n");
   break;
   case'p':
   	case'P':
	if(a<b)
	{
		printf("MATH ERROR\n");
	}
	else
	{
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	c=a-b;
	for(j=1;j<=c;j++)
	{
		fa=fa*j;
	}
    }
    c=(fact/fa);
    break;
    case'c':
    case'C':
    if(a<b)
	{
		printf("MATH ERROR\n");
	}
	else
	{
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	c=a-b;
	for(j=1;j<=c;j++)
	{
		fa=fa*j;
	}
	for(l=1;l<=b;l++)
	{
	 f=f*l;	
	}
	fa=fa*f;
    }
    	c=fact/fa;
	break;
	case'!':
		if (a==0)
		{
			printf("%d!=1",a);
		}
		else
		{
			for(i=1;i<=a;i++)
			{
				fact=fact*i;
			}
		}
		c=fact;
		break;	
   default:
   printf("invalid command");
   system("cls");
  }
   printf("=%.2f\n",c);
 }while(d!=1);

return 0;
}
