#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int z;
	float num1,num2,result=0.0;
	char sign;
void cal()
{
	switch(sign)
		{
		case '+':
		result=num1+num2;
		printf("The result is %.2f",result);
		break;
		case'*':
		result=num1*num2;
		printf("The result is %.2f",result);
		break;
		case'/':
		result=num1/num2;
		printf("The result is %.2f",result);
		break;
		case'-':
		result=num1-num2;
		printf("The result is %.2f",result);
		break;
		case'Q':
		case'q':
		printf("End of calculations ");z=z+1;
		//default :
		//	printf("Invalid Operation ");
		}
}
navi()
{
    switch(sign)
		{
			case '+':
			result=result+num2;
			printf("The result is %.2f",result);
			break;
			case'*':
			result=result*num2;
			printf("The result is %.2f",result);
			break;
			case'/':
			result=result/num2;
			printf("The result is %.2f",result);
			break;
			case'-':
			result=result-num2;
			printf("The result is %.2f",result);
			break;
			case'Q':
			case'q':
			printf("End of calculations ");z=z+1;
			//default :
			//	printf("Invalid Operation ");
		}
}
int main()
{
	printf("THE Calculator provides + * / - \n");
	do
	{
		printf("Enter a value : \n");
		scanf("%f",&num1);

		printf("Enter the operation : ");
		//scanf("%c",&sign);*/
		sign=getch();
		printf("Enter a value : \n");
		scanf("%f",&num2);
		cal();
}while(result<=0.0);
		if(result>0.0)
		{
			do
			{
		printf("\nEnter the operation : \n");
		scanf("%c",&sign);

	//	printf("Enter the second value : \n");
		//scanf("%f",&num2);
		navi();
		}while(z!=1);
	}
}
