#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<dos.h>
void gotoxy(short x, short y)           //definition of gotoxy function//                                               
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int main()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		gotoxy(4,7);printf(".");sleep(1);
		gotoxy(5,6);printf(".");sleep(1);
		gotoxy(6,5);printf(".");sleep(1);
		gotoxy(5,4);printf(".");sleep(1);
		gotoxy(4,3);printf(".");sleep(1);
		gotoxy(3,4);printf(".");sleep(1);
		gotoxy(2,5);printf(".");sleep(1);
		gotoxy(3,6);printf(".");sleep(1);
	}
}
