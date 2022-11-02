#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<cstring>
#include<math.h>
int main()
{

char input[23];
int sum;
int power;
int base;
int val;
int len;
fgets(input,23,stdin);
strupr(input);
scanf("%d",&base);
len=strlen(input);
power=len-1;
for(int x=0;x<len;x++,power--)
{
        val=input[x]-48;
        if(val>9)
        val-=7; 
        sum+=val*pow(base,power);
}
printf("%d",sum);
}

