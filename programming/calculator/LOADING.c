#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<dos.h>
#include<time.h>
void gotoxy(short x, short y)           //definition of gotoxy function//
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int main()
{
	int i,j,l;
	for(i=0;i<10;i++)
	{/*
		gotoxy(2,1);printf(".");sleep(1);
		gotoxy(4,2);printf(".");sleep(1);
		gotoxy(4,3);printf(".");sleep(1);
		gotoxy(2,4);printf(".");sleep(1);
		gotoxy(0,3);printf(".");sleep(1);
		gotoxy(0,2);printf(".");sleep(1);
		*/
		gotoxy(45,3);printf("Loading");

		gotoxy(48,7);printf("*");sleep(1);
		gotoxy(50,8);printf("*");
		gotoxy(50,9);printf("*");sleep(1);
		gotoxy(48,10);printf("*");sleep(1);
		gotoxy(46,9);printf("*");
		gotoxy(46,8);printf("*");sleep(1);
		system("cls");
	}
}
