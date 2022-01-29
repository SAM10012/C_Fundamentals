#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 100

struct item
{
	char item_id[5];
	float weight;
	float profit;
	float v_w_ratio;
};

struct item item_no[MAX];
struct item temp;

float max_weight;
float max_profit=0;



void main()
{
	int n,i,j;
	
	printf("\n Enter the maximum weight bearing capacity of the knapsack: ");
	scanf("%f",&max_weight);
	
	printf("\n Please enter the number of items: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("\n Please enter the details of item_no[%d]: ",i);
		
		printf("\n Enter item_id: ");
		scanf("%s",item_no[i].item_id);
		
		printf("\n Enter weight: ");
		scanf("%f",&item_no[i].weight);
		
		printf("\n Enter profit: ");
		scanf("%f",&item_no[i].profit);
		
		item_no[i].v_w_ratio = (item_no[i].profit / item_no[i].weight);
	}
	
	printf("\n The details of items are as follows: ");
	
	printf("\n ITEM_ID    WEIGHT       PROFIT          VALUE/WT RATIO");
	for(i=1;i<=n;i++)
	{
		printf("\n   %s        %.2f          %.2f            %.2f",item_no[i].item_id,item_no[i].weight,item_no[i].profit,item_no[i].v_w_ratio);
	}

    // FIRST STEP : SORTING ALL ITEMS IN DESCENDING ORDER OF VALUE/WEIGHT RATIOS.
    
    for(i=1;i<n;i++)
	{
	for(j=i+1;j<=n;j++)
	{	
	if(item_no[i].v_w_ratio <= item_no[j].v_w_ratio)
	{
		temp = item_no[i];
		item_no[i] = item_no[j];
		item_no[j] = temp;
	}
	}
	}

	printf("\n\n The details of sorted items are as follows: ");
	printf("\n item_ID    weight       PROFIT          V/W RATIO");
	for(i=1;i<=n;i++)
	{
	printf("\n   %s        %.2f          %.2f          %.2f",item_no[i].item_id,item_no[i].weight,item_no[i].profit,item_no[i].v_w_ratio);	
	}
	
	
	
	// KNAPSACK PROBLEM PROGRAM
	

	for(i=1;i<=n;i++)
	{
		if(max_weight > 0  &&  item_no[i].weight <= max_weight)
		{
			max_weight = max_weight - item_no[i].weight;
			max_profit = max_profit + item_no[i].profit;
			printf("\n\n Item with id %s has been taken with weight %.2f with its total weight.", item_no[i].item_id,item_no[i].weight);
		}
		else
		{
			if(max_weight > 0)
		{
			max_profit = max_profit + ((item_no[i].profit * max_weight) / item_no[i].weight);
			printf("\n\n Item with id %s has been taken with weight %.2f partially.", item_no[i].item_id,max_weight);
		}
		
		break;
	}
		 
	}
	
	printf("\n\n The maximum profit from the knapsack is %.2f units",max_profit);
		
}


