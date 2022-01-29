#include<stdio.h>
#include<conio.h>
#define max 3
struct cricket
{
	char player[15];
	char team[10];
	float avg;
	};
	void main()
	{
		struct cricket arr[max];
		int i;
		float highest;
		for(i=0;i<max;i++)
		{
			printf("\nPLAYER NO. '%d':",i);
			printf("\nName: ");
			fflush(stdin);
			gets(arr[i].player);
			printf("\nTeam name: ");
			gets(arr[i].team);
			printf("\nBatting Average: ");
			scanf("%d",&arr[i].avg);
		}
		printf("\n\nThe name of the player having highest average: \n");
		highest=arr[0].avg;
		
		for(i=0;i<max;i++)
		{
		if(arr[i].avg>highest)
		{
		highest=arr[i].avg;
	}
		}
		
		for(i=0;i<max;i++)
		{
			if((arr[i].avg)==highest)
			{
				printf("\n %s \n",arr[i].player);
			}
		}
		
	}
