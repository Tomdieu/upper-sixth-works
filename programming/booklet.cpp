#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
struct stud
{
	int coef;
	float mark,total;
	char name[40];
};
int main(void)
{
	struct stud a,m,c,p,y,co,f,e,r,t,n,g,z,x;
	printf("Enter the name of the student : ");
	scanf("%s",&a.name);
	printf("enter your mark in mathematics :\n");
	scanf("%f",&y.mark);
	printf("enter your mark in physics :\n");
	scanf("%f",&p.mark);
	printf("enter your mark in chemistry:\n");
	scanf("%f",&c.mark);
	printf("enter your mark in computer:\n");
	scanf("%f",&co.mark);
	printf("enter your mark in further mathematics :\n");
	scanf("%f",&f.mark);
	e.mark=y.mark*5;
	r.mark=p.mark*5;
	t.mark=c.mark*5;
	n.mark=co.mark*5;
	g.mark=f.mark*5;
	system("cls");
	printf(" Ministy of secondary education                          Replublique Du Cameroun  \n  ");
	printf("Government bilingual high school yaounde                   paix-travail-patrie \n  ");
	printf(" email:ivantomdio@gmail.com                                    ************       \n");
	printf("class :upper sixth science 1");
	printf("\n");
	printf("Name: %s",a.name);  printf(" number on roll 100\n");
	printf("_______________ __________________________________________________________________\n");
	printf("subject           mark               coef          mark*coef \n"        );
	printf("math\t");   printf("\t%.2f",y.mark);   printf("\t\t\t5");  printf("\t\t%.2f\n",e.mark);
	printf("physic\t"); printf("\t%.2f",p.mark);   printf("\t\t\t5");  printf("\t\t%.2f\n",r.mark);
	printf("chem\t");   printf("\t %.2f",c.mark);  printf("\t\t\t5");  printf("\t\t%.2f\n",t.mark);
	printf("comp\t");   printf("\t%.2f",co.mark);  printf("\t\t\t5");  printf("\t\t%.2f\n",n.mark);
	printf("f.math\t"); printf("\t%.2f",f.mark);   printf("\t\t\t5");  printf("\t\t%.2f\n",g.mark);
	printf("_________________________________________________________________________________\n");
	z.total=e.mark+r.mark+t.mark+n.mark+g.mark;
	printf("total = %.2f\n",z.total);
	x.mark=(z.total/25);
	printf("\n");
	printf("Average=%.2f",x.mark);
	getch();
	
	return 0;
	
	
}
