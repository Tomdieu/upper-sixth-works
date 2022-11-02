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
	do
	{
		printf("Enter a value : \n");
		scanf("%f",&num1);
		printf("Enter the operation : \n");
		sign=getche();
		printf("\nEnter a value : \n");
		scanf("%f",&num2);
		cal();
}while(result==0.0);
		if(result!=0.0)
		{
			do
			{
		printf("\nEnter the operation : \n");
		sign=getche();
		printf("\n Enter a value : \n");
		scanf("%f",&num2);
		navi();
		   }while(z!=1);
	}
	}while(z!=1);
}
