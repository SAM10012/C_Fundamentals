#include<stdio.h>
#include<conio.h>
#define max 2
struct Ticket_Reservation
{
	int train_no;
	char train_name[15];
	int dt_of_journey;
	char passenger_name[20];
	char station_name[12];
	float booking_amount;
};
void main()
{
	int i;
	struct Ticket_Reservation arr[max];
	for(i=0;i<max;i++)
	{
		printf("\nDETAILS OF PASSENGER '%d': ",i);
		printf("\nTrain No.: ");
		scanf("%d",&arr[i].train_no);
		printf("\nTrain Name: ");
		fflush(stdin);
		gets(arr[i].train_name);
		printf("\nDate of Journey: ");
		scanf("%d",&arr[i].dt_of_journey);
		printf("\nPassenger Name: ");
		fflush(stdin);
		gets(arr[i].passenger_name);
		printf("\nStation Name: ");
		fflush(stdin);
		gets(arr[i].station_name);
		printf("\nBooking Amt.: ");
		scanf("%f",&arr[i].booking_amount);
	}
	for(i=0;i<max;i++)
	{
		printf("\n\nDETAILS OF PASSENGER '%d': ",i);
		
		printf("\nTrain No.: %d",arr[i].train_no);
		
		printf("\nTrain Name: %s",arr[i].train_name);
		
		printf("\nDate of Journey: %d",arr[i].dt_of_journey);
		
		printf("\nPassenger Name: %s",arr[i].passenger_name);
		
		printf("\nStation Name: %s",arr[i].station_name);
		
		printf("\nBooking Amt.: Rs.%d",(int)arr[i].booking_amount);
		
	}
}
