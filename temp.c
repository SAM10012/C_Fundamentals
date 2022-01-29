#include<stdio.h>
#include<conio.h>
void main()
{
	float temp1,temp2;
	int option;
	printf("Enter: 1 for entering temperature in celsius\n 2 for entering temperature in fahrenheit\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			{
			printf("Enter the temperature in celsius: ");
			scanf("%f",&temp1);
			printf("The temperature in fahrenheit is %f",(temp1*(9/5)+32));
			break;
		}
			case 2:
			{
			printf("Enter the temperature in fahrenheit: ");
			scanf("%f",&temp2);
			printf("The temperature in celsius is %f",((temp2-32)*(5/9)));
			break;
	}
	default:
		{
			printf("Enter either 1 or 2");
			break;
		}
}
}
