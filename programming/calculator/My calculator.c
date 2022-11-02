#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<time.h>
#include <stdlib.h>
struct rock
{
	char r[1000];
}; 
int main()
{

	struct rock yu;
	int a,b,yt=12345,rt,i,v;
	do
	{
		system("color A");
	printf("\n\n\n\n\n\n\n\t\t\tENTER PASSWORD FOR ACCESS :");
	scanf("%d",&rt);
	if(rt!=12345 && rt!=25 &&rt!=666)
	
	{   
	system("color 89");
		printf("\a ALERT INCORRECT PASSWORD \n");
		printf(" TRY AGAING  \n");
		sleep(2);
		system("cls");
        for(i=10;i>=0;i--)
	{
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\t\t\tyou will try again after \n");
		printf("\t%d",i);
		system("color A");
		sleep(1);
		system("cls");
	} 
		 	
	}
	while(rt==12345 || rt==25 || rt==666)
	{
		int i,j,c=0;
		system("color E");
		printf(" CORRECT PASSWORD ");
		sleep(1);
		printf("\n");
	
		system("cls");
	printf("\n\n\n\n\n\n\n\t\t\tloading.");sleep(1);printf(".");sleep(1);printf(".");sleep(1);printf(".");printf(".");
	printf("\n press enter to continue \n");
	getch();
	system("cls");	
	system("color F");
	printf("\t|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-||-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|\n");
	printf("\t|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-||-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|\n");
	printf("\t|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-||-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|\n");
	printf("\t\a***          ____               ____                  _____  ___   ___        *****\n");
	printf("\t\a*****       |       /\\a   |    |     |    | |      /\\a  |   |   | |   \\a    *******\n");
	printf("\t\a*******     |      /  \\a  |    |     |    | |     /  \\a |   |   | |--- \a   *********\n");
	printf("\t\a*********   |____ /    \\a |___ |____ |____| |___ /    \\a|   |___| |   \\a **********\n");
	printf("\t\a**********                                                              ***********\n");
	printf("\t\a************                                                          *************\n");
	printf("\t\a***********************************************************************************\n");
	printf("\n\tenter your name : \t");scanf("%s",&yu.r);
	sleep(1);
	system("cls");
		system("color E");
	printf("\t**************************************************************************\n");
	printf("\t\a**                          simple calculator                         **\n");
	printf("\t******                                                              ******\n");
	printf("\t\a************************************************************************\n");
	printf("\t\a*************     ********************************      ****************\n");
	printf("\t\a************************************************************************\n");
	printf("\t        VIRUS    VIRUS       VIRUS      VIRUS      VIRUS      VIRUS       \n");
	printf("\t\a                                                                        \n");
	sleep(1);
	system("cls");
	v=2;
	printf("\n\n\n\n\n\n\n\t\t\t wait %d seconds ",v); 
	sleep(2);
	do
	{
		system("color b9");
		system("cls");
	printf("                        welcome                      %s\n",yu.r);
	printf(" \t_____________________________________________________________________ \n");
	printf("\t|                                                                     |\n");
	printf("\t|                                                                     |\n");
	printf("\t|                      ___________________                            |\n");
	printf("\t|                     |   MY CALCULATOR   |                           |\n");
	printf("\t|                     |___________________|                           |\n");
	printf("\t|                         <-OPTIONS->                                 |\n");
	printf("\t|                                                                     |\n");
	printf("\t|                                                                     |\n");
	printf("\t|                                 13:even or odd                      |\n");
	printf("\t|                                                                     |\n");
	printf("\t|   1:factorial                   14:binary,octal,hexadecimal,denary  |\n");
	printf("\t|                                                                     |\n");
	printf("\t|   2:Quadratic aquation          15:trigonomety                      |\n");
	printf("\t|                                                                     |\n");
	printf("\t|   3:multiplication table        16:credits                          |\n");
	printf("\t|                                                                     |\n");
	printf("\t|   4:Addition table              17:permutatio(nPr)                  |\n");
	printf("\t|                                                                     |\n");
	printf("\t|   5:Subtraction                 18:combination(nCr)                 |\n");
	printf("\t|                                                                     |\n");
	printf("\t|   6:addition                    19:Help                             |\n");
	printf("\t|                                                                     |\n");
	printf("\t|   7:sqrt                        20:Temperature converter            |\n");
	printf("\t|                                                                     |\n");
	printf("\t|   8:power                       21:sorting                          |\n");
	printf("\t|                                                                     |\n");
	printf("\t|   9:exit                        22:searching                        |\n");
	printf("\t|                                                                     |\n");
	printf("\t|  10:multiplication table        23:open calculator                  |\n");
	printf("\t|     from 1 to 12                                                    |\n");
	printf("\t|                                 24:Mini CAlCULATOR                  |\n");
	printf("\t|  11:Greatest of 3 number                                            |\n");
	printf("\t|                                                                     |\n");
	printf("\t|  12:logarithmic                                                     |\n");
	printf("\t|                                                                     |\n");
	printf("\t|                                                                     |\n");
	printf("\t|                                                                     |\n");
	printf("\t|                                                   By:Tomdieu ivan   |\n");
	printf("\t|                                                                     |\n");
	printf("\t|enter your selection.....                            copyright(c)2019|\n");
	printf("\t|____________________________________________________________________ |\n");
	printf("\n");
	printf("\t\t");
	scanf("%d",&a);


if (a==2)
{
	system("cls");
	float a,b,c,d,x1,x2,x0,x3;
	char e;
	do
	{
			system("color e1");
		printf("loading.");sleep(1);printf(".");sleep(1);printf(".");sleep(1);printf(".");printf(".");
		system("cls");
	    printf("\athis program perform quadratics equation of the form  ax²+bx+c=0 \n ");
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
		printf("the equation has equal roots \n which are \n: ");
		x1=(-b+(sqrt(d)))/(2*a);
		x2=(-b-(sqrt(d)))/(2*a);
		printf("\nx1= %.2f\n",x1);
		printf(" x2=%.2f\n",x2);
	}
	if ( d < 0)
	{
		printf("using the formular \n ");
		printf(" b*b-4*a*c < 0 \n");
		printf("the equation has complex roots \n");
		printf("%.2f*%.2f-4*%.2f*%.2f=%.2f\n",b,b,a,c,d);
			x1=(-b/(2*a));
		x0=(sqrt(-d));
		x2=(-b/(2*a));
		x3=(sqrt(-d));
		printf("x1=%.2f+%.2fi\n",x1,x0);
		printf("x2=%.2f-%.2fi\n",x2,x3);
    }
	else if (d>0)
	{
		printf(" \ausing the formular below the equation has real and distinct roots which are \a\n: ");
		printf(" b*b-4*a*c > 0\n");
		printf("%.2f*%.2f-4*%.2f*%.2f=%.2f\n",b,b,a,c,d);
		printf("\n");
        x1=(-b+(sqrt(d)))/(2*a);
		x2=(-b-(sqrt(d)))/(2*a);
		printf("\nx1= %.2f\n",x1);
		printf(" x2=%.2f\n",x2);
			}
	    printf("------------------------------\n");
	    printf("- Do you want to continue    -\n");
	    printf("-if yes press 1     if no 0  -\n");
        printf("-  press   1:to continue     -\n");
		printf("--         0:to end         --\n");
		printf("------------------------------\n");
		e=getche();
	}while(e=='1');	
	

	
}

	if (a==3)
	{
		int n,mult,i,t;
		char c; 
		do
		{
			system("color ec");
		printf("");
		system("cls");
		printf("\aenter a number to perform its multiplication table \n: ");
		scanf("%d",&n);
		for (i=1;i<=13;i++)
		{
			mult=n*i;
			printf("%d*%d=%d\n",n,i,mult);
		}


	    printf("do you want to continue \n press [1]  else press any number: ");
	    c=getche();
	}while(c=='1');

	
}
if(a==4)
{
int b,c,i;
char e,d;
system("cls");
do
{
	system("color bc");
printf("\aEnter a numder to perform its addition table ");
scanf("%d",&b);
for (i=1;i<=12;i++)
{
	c=b+i;
	printf("%d+%d=%d\n",b,i,c);
}

printf("");
printf("do you want to continue press [1]\n");
printf("          to end press any number\n");
printf("");
d=getche();
}while(d=='1');
if (a==5)
{
	system("cls");
	int b,c,d,i;
	char e;
	system("cls");
	printf("Enter a number to perform its subtraction table: ");
	scanf("%d",&b);
	for(i=1;i<=12;i++)
	{
		c=b-i;
		printf("%d-%d=%d\n",b,i,c);
	}
    printf("");
    printf("do you want to continue press [1]\n");
    printf("        to end   press any number\n");
    d=getche();
}while(e=='1');


}
if(a==7)
{
	system("cls");
	int b,e;
	float c;
	char d;
	do
	{
		system("color a2");
		system("cls");
	printf("\aEnter a number to performs its square root :  ");       //for square roots
	scanf("%d",&b);
	c=(sqrt(b));
	printf("square root of %d = %.2f\n",b,c);
	printf("\n");
	printf("do you want to continue press [1]\n ");
	printf("        to end   press any number \n");
	d=getche();
}while(d=='1');
	
}
if(a==16)
{
	system("cls");
	int n;
	system("color ca");
	printf("\a_______________________________________________________________\a\n");
	printf("|                     simple calculator                          |\n");
	printf("| by: ivan tom                                                   |\n");
	printf("|  main programmer: Tomdieu ivan                                 |\n");
	printf("|  graphic:--->                         *     *  ****** * * *    |\n");
	printf("|  sound:ivan                            *   *    *     *    *   |\n");
	printf("|  producer:navi                           *      ****  * - *    |\n");
	printf("|      SPECIAL THANKS TO                   *      *     *        |\n");
	printf("| **Dogmo Wamba(idea of the program)       *     ****** *        |\n");
	printf("|  -Lontsi Alex (inspiration)                                    |\n");
	printf("|  *Kadji aquila(help me in control structure)                   |\n");
	printf("|                                                                |\n");
	printf("|                                                                |\n");
	printf("|  this is just a start....                                      |\n");
	printf("|                                              copyright(c)2020  |\n");
	printf("----------------------------------------------------------------\n");
	printf("\n");
	printf("press [1] to continue \n");
	n=getche();
}
if(a==8)
{
	system("cls");
	int b,c,d,e;
	printf("");
	do{
		system("color bc");
		system("cls");
	printf("\aEnter a number  : ");
	scanf("%d",&b);
	printf("Enter the power : ");
	scanf("%d",&c);
	d=pow(b,c);
	printf("%d^%d=%d\n",b,c,d);
	printf("");
	printf("press [1] to continue \n ");
	e=getche();
}while(e=='1');
	
}
if(a==9)
{
	int b;
	char d;
	exit(0);
	printf("\a\n\rAre you sure you want to exit     \n");
	printf("\a [0] to exit  any number to continue \n");
	d=getche();
	while(d=='0')
	{
		printf("\n");
		printf("Thanks for using my calculator ");
		scanf("");
		exit(0);
	}
}
if(a==22)
{
	int ar[25],i,j,data,flag=0,size,x;
	char b;
	do
	{
		system("cls");
		system("color b9");
	printf("enter number of list:");
	scanf("%d",&size);
	printf("enter the number of element of list");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\nenter the value to search: ");
	scanf("%d",&data);
	for(j=0;j<size;j++)
	{
		if(ar[j]==data)
		{
			flag=1;
			x=j;
			break;
		}
	}
	if(flag==1)
	{
		printf("value found at location %d",x);
	}
	else
	{
		printf("value not found");
	}
	printf("press 1 to continue \n");
	printf("press anu number to end\n");
	b=getche();
}while(b=='1');
}
if(a==21)
{
	int n,tem,a[100],i,j,k,l;
	char z;
	do
	{
		system("cls");
		system("color B");
		int n,temp,a[100],i,j,k,l;
	printf("ENTER A NUMBER ");
	scanf("%d",&n);
	printf("enter %d number ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		for(k=0;k<n-j-1;k++)
		{
			if(a[k]>a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
			    a[k+1]=temp;
			}
		}
	}
	printf("ELEMENT AFTER SORTING\n");
	for(l=0;l<n;l++)
	{
	printf("%d\n",a[l]);	
	}
		printf("Do You want to repeat press 1\n");
		printf("Else press any number \n");
		z=getche();
	}while(z=='1');
}
if(a==10)
{
	system("cls");
	int row,col,y,colmax=12,rowmax=12,e;
row=1;
system("color f3");
printf("\n\nmultiplication table from 1 to 12\n\n****************\b*****************************************************\n\n");
	do
{
	col=1;
	do
	{
	y=row*col;
	printf(" %4d", y);
	col++;  }
	while(col<=colmax);
	printf("\n");
	row++;
	}
while(row<=rowmax);
	printf("\n***************************************\b********************************\n\r");
	printf("\n");
	printf("press any number to continue \n");
	e=getch();
}
if(a==11)
{
	float a,b,c,d;
	do{
		system("color 9b");
	system("cls");
	printf(" \aenter 3 number ");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	if(a>b && a>c)
	{
	printf("\a%.3f is the greatest\n",a);
	}
	else if (b>a && b>c)
	{
	printf("\a%.3f is the greatest\n",b);
    }
	else
	{
	printf("\a%.3f is the greatest\n",c);
	}
	printf("\n");
	printf("\apress [1] to continue \n");
	printf("\a     any number to end\n");
	d=getche();
}while(d=='1');
}
if(a==6)
{
int n, i ,*ptr ,sum=0;
char z; 
do{
system("cls");
system("color 2f");
sum=0;
   printf ("Enter the numer of element you want to add : " );
    scanf ("%d",&n); 
	ptr=(int*) malloc (n*sizeof ( int ));
	 //malloc allocation 8
	  if ( ptr==NULL) 
	   {
	    printf ("Error ! memory not allocated . " ); 
		 exit (0); 
		  } 
		   printf ("Enter elements to do thier sum : " ); 
		    for ( i =0;i<n;++i )
 {  
 scanf ("%d" , ptr+i );
   sum+=*(ptr+i ); 
   }
   printf ("Sum=%d" ,sum);
   free ( ptr );
   printf("\n\npress 1 to continue");
   z=getche();
}while(z=='1');
}
if(a==13)
{
	int b,c,e,f;
	char d;
	do
	{
	printf("\n");
	system("cls");
	system("color 3b");
	printf("\aEnter a number to whether it is \n even or odd : \n\n");
	scanf("%d",&b);
	c=b%2;
	if(c==0)
	{
		printf("%d is even ",b);
	}
	else
	{
		printf("%d is odd ",b);
	}
	printf("\n");
	printf("    press [1] to continue    ");
	printf(" or press any number to end  ");
	d=getche();
}while(d=='1');
 
}
if(a==14)
{
	int b,c;
	char t;
	do{
	system("cls");
	printf("\n");
	system("color 3e");
	printf("enter an integer  to convert to\n hexadecimal\nbinary\ndenary\n");
	scanf("%d",&b);
	printf("%d in denary is %2d\n",b,b);
	printf("%d in hexadecimal is %2x\n",b,b);
	printf("%d in octal is %o\n",b,b);
	printf("\n");
	printf("do you want to continue \n press[1]  else press any number\n");
	c=getche();
}while(c=='1');
	
}
if(a==15)
{
    char z;
	printf("\atrigonomety is not yet available \n");
	z=getche();
}
if(a==12)
{
    char z;
	printf("\alogarithmic not available \n");
	z=getche();
	
}
if(a==17)
{
	system("cls");
     int a,b,c,d,fact=1,fa=1,i,j;
     char t;
     do
     {
     	system("color 4e");
system("cls");
	printf("Enter a number and perfmutatio in the form nPr:\n");
	scanf("%d%d",&a,&b);
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
	d=(fact/fa);
	printf("%dP%d=%d\n",a,b,d);
    }
    printf(" press 1:to repeat            ");
    printf("        any number to end     ");
    printf(" \n");
    t=getche();
}while(t=='1');
   
}
if(a==20)
{
	int e,f,g,h,i,j=0,k,l,m,b;
char a,d;
float n,c;
	do
	{
		system("color 5f");
		system("cls");
	printf(" _______________________________________________\n");
	printf("|       CONVERTER                               |\n");
	printf("| 1:  °c to °k         7:exit                   |\n");
	printf("| 2:  °k to °c                                  |\n");
	printf("| 3:  °c to °f                                  |\n");
	printf("| 4:  °k to °f                                  |\n");
	printf("| 5:  °f to °c                                  |\n");
	printf("| 6:  °f to °k                                  |\n");
	printf("|_______________________________________________|\n");
	printf("enter your selection : ");
	a=getche();
	l=clock();
	printf("%7d",clock());
	switch(a)
	{
		case '1':
			
			do
			{
				system("color 3e");
				system("cls");
			printf("Enter your temperature in °c :\n");
			scanf("%d",&b);
			c=273+b;
			printf("%d °c =%.2f°k\n ",b,c);
			printf("Do you want to repeat press [1] \n");            /*kelvin=celcius+273°*/
			printf("            to end      press [0] ");
			d=getche();
			}while(d=='1');
			break;
		case '2':
			do
			{
				system("cls");
				system("color 3e");
		printf("enter temperature in kelvin \n");
		scanf("%d",&b);
		c=b-273;
		printf("%d °K=°%.2fC\n",b,c);           /*celsius=kelvin-273*/	
        printf("press 1 to repeat \n");
		printf("press any char \n");
		d=getche();
	}while(d=='1');
	break;
	case '3':
		
		do
		{
			system("cls");
			system("color 3e");
			printf("enter temperature in celsius:\n ");
			scanf("%f,",&n);
			c=(1.8*n)+32;                          /*fahrenheit=1.8*°c+32*/
			printf("%f°c=%.2f°f\n",n,c);
			printf("press 1 to repeat \n");
			printf("press any char \n");
			d=getche();
		}while(d=='1');break;
		case '4':
		
			do
			{
				system("color 3e");
				system("cls");
			printf("enter temperature in degree kelvin \n");
			scanf("%f",&n);
			c=(1.8*(n-273))+273;
			printf("%.2f °k=%.2f °f\n",n,c);
			printf("press 1 to repeat \n");
			printf("press any char \n");
			d=getche();
	        }while(d=='1'); break;                                            /*faraneit=(1.8*kelvin-273)+32*/
	     case'5':

	     do{
	     	system("cls");
	     	system("color 3e");
		 printf("enter temperature in fahrenheit \n");
		 scanf("%f",&n);
		 c=(n-32)/1.8;
		 printf("%.2f °f = %.2f °c\n",n,c);
		 printf("press 1 to repeat \n");
			printf("press any char \n");
			d=getche();	
	  }while(d=='1');break;
	   case '7':
	   j=j+1;
	   break;     
	} 
}
while(j!=1);
}
if(a==18)
{
	system("cls");
	
     int a,b,c,d,fact=1,fa=1,i,j,l,f=1;
     char z;
     do{
     	system("color a0");
	system("cls");
	printf("Enter a number and combination in the form nCr:\n");
	scanf("%d%d",&a,&b);
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
	d=fact/fa;
	printf("%dC%d=%d\n",a,b,d);
    }
    printf("press  1:to continue \n");
    printf("     any number to end\n");
    z=getche();
}while(z=='1');
    
}
if(a==19)
{
	char v;
	system("color b2");
	system("cls");
	printf(" This program help you to calculate \n ");
	printf(" And so requires only integer and real\n");
	printf(" if you press a character it will enter\n");
	printf(" and infinite loop \n");
	printf(" and the only way to stop it is to exit\n ");
	printf(" the program \n");
	printf("The only way to avoid it is to respect \n the data type of the program\n");
	v=getche();
	
}
if(a==23)
{
system("cls");
printf("wait while loading calculator ");
sleep(2);
system("calc.exe");
}
if(a==24)
{
	float a,b,c,d,fact=1,fa=1,i,j,l,f=1,z;
 char e;
system("cls");
do
 {
printf("TO use this calculator ,you must write the \noperand operator aperand to perform the operation\nyou need to do it can only accept\n operation like a+b \n that is only two operand and one operation \n  ");
printf("if you want to exit , enter two oprand with E in between them  E=exit");
system("cls");

 printf(" operation available \n +,*,/,-,^,npr,ncr \n ");
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
		case'E':
			if(d==0)
			{
				d=d+1;
			}
		break;	
   default:
   printf("invalid command");
   system("cls");
   d=d+1;
  }
   printf("=%.2f\n",c);
 }while(d!=1);

}
if(a==1)
{
	
		system("cls");
		int n,i,fact=1;
            char ou;
		printf("");
		do{
		printf("loading.");sleep(1);printf(".");sleep(1);printf(".");sleep(1);printf(".");printf(".");
		system("cls");
			system("color f1");
		printf("\aEnter a number to computes it factorial: ");
		scanf("%d",&n);
		if (n==0)
		{
			printf("%d!=1",n);
		}
		else
		{
			for(i=1;i<=n;i++)
			{
				fact=fact*i;
			}
			printf("%d!=%d\n",n,fact);
		}
		printf("Do you want to continue  press [1]\n");
		ou=getche();
	   }while(ou=='1');
}
}
while(a!=245);
}
}while(b!=2);
getche();
}
