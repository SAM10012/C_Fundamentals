#include<stdio.h>
#include<conio.h>
void main()
{
	float temp_in_f,temp_in_c;
	int unit;
	printf("Press 1 to enter temperature in celsius unit:\nPress 2 to enter temperature in fahrenheit unit:\n");
	fflush(stdin);
	scanf("%d",&unit);
	switch(unit)
	{
		case 1 :
			{
				printf("Celsius to Fahrenheit:\n");
				printf("Enter the temperature:\n");
				scanf("%f",&temp_in_c);
				temp_in_f=(((9*temp_in_c)/5)+32);
				printf("%f degree celsius is converted to %f fahrenheit\n",temp_in_c,temp_in_f);
				break;
			}
			case 2 :
				{
						printf("Fahrenheit to Celsius:\n");
				printf("Enter the temperature:\n");
				scanf("%f",&temp_in_f);
				temp_in_c=((5*(temp_in_f-32))/9);
				printf("%f fahrenheit is converted to %f degree celsius\n",temp_in_f,temp_in_c);
				break;
				}
				default :
					printf("Please enter appropriately\n");
					break; 
	}
}
