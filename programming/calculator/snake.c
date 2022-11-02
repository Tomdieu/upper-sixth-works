#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
void gotoxy(short x, short y)           //definition of gotoxy function//                                               
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void clrscr(){system("cls");}
int i,j=2,k,l,m,n,o,p,q,r,t,s,u,v,w,x,y,z,rex,pa,len,cpr,coorX,coory,coory1,coory2,score,score1,level=1,rany,ranx,count;
 char a,b,c,player[100];
 int az;
 char agz;
 FILE *fp;
int main()
{
	do
	 	 					{
	 	 						system("color 9");
	 	 					clrscr();
	 	 					gotoxy(54,3);printf("|Player :%s             |",player);
	 	 					gotoxy(54,4);printf("----------------------------");
	 	 					gotoxy(54,2);printf("----------------------------");
	 	 					gotoxy(54,6);printf("FIRST SNAKE GAME EDITION");
	 	 					gotoxy(54,10);printf("Press S to save your score");
	 	 					gotoxy(54,12);printf("SCORE: %d",score);
	 	 					gotoxy(54,14);printf("press E to exit");
	 	 					gotoxy(u,v);printf("::");
	 	 					gotoxy(12,30); agz=getch();
	 	 					if(agz=='S' || agz=='s')
	 	 					{
	 	 						fp=fopen("RAOUL.txt","w");
	 	 						fprintf(fp,"Score : %d",score);
	 	 						fputs("this is your score",fp);
	 	 						gotoxy(54,10);printf("score save");sleep(1);
	 	 						score1=score;
							}
							if(agz=='f' || agz=='F')
							{
								for(p=0;p<50;p++)
								{
									gotoxy(p,0);printf("-");
								}
								for(q=0;q<50;q++)
								{
									gotoxy(50,q);printf("|");
								}
								for(p=50;p<=0;p--)
								{
									gotoxy(p,50);printf("-");
								}
								for(q=50;q<=0;q--)
								{
									gotoxy(50,q);printf("|");
								}sleep(1);
							}
	 	 					 if(agz=='2')
	 	 					 {
	 	 					 rany=rany+1;
							   gotoxy(ranx,rany);printf("^");
							  
							 }
							 if(agz=='5')
							 {
							 	rany=rany-1;
							 	gotoxy(ranx,rany);printf("^");
							 	 gotoxy(ranx,rany+1);printf("|");
							 }
							 if(agz=='1')
							 {
							    ranx=ranx-1;
 							 	gotoxy(ranx,rany);printf("<--");
 							 	 
							 }
							 if(agz=='3')
							 {
							 	ranx=ranx+1;
							 	gotoxy(ranx,rany);printf("-->");
							 }
							 if(agz=='E' || agz=='e' )
							 {
							 	count=count+1;
							 }
							 if(ranx==u && rany==v)
							 {
							 	score=score+1;
							 	u=rand()%50;
	 	 					    v=rand()%40;
							 }
							 if(score==100)
							 {
							 	gotoxy(54,19);printf("-----------");
							 	gotoxy(54,20);printf("|EXCELLENT|");
							 	gotoxy(54,21);printf("-----------");
							 }
							 if(score==50)
							 {
							 	gotoxy(54,19);printf("-----------");
							 	gotoxy(54,20);printf("|VERY GOOD|");
							 	gotoxy(54,21);printf("-----------");
							 }
							}while(count!=1);
}
