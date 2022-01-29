//            JOB SEQUENCING WITH DEADLINES PROBLEM
//                 (USING ARRAY OF STRUCTURES)


#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 120

struct job
{
	char job_id[5];
	int deadline;
	int profit;
};

int minimum(int x, int y)
{
	if(x<y || x==y)
	return x;
	else
	return y;
}

void job_sequencing_with_deadlines(int n,struct job job_no[MAX],int max_deadline);

struct job job_no[MAX];
struct job temp;

void main()
{
	int n,i,j,max_deadline,k;
	
	printf("\n Please enter the number of jobs: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("\n Please enter the details of job_no[%d]: ",i);
		printf("\n Enter job_id: ");
		scanf("%s",&job_no[i].job_id);
		printf("\n Enter deadline: ");
		scanf("%d",&job_no[i].deadline);
		printf("\n Enter profit: ");
		scanf("%d",&job_no[i].profit);
	}
	
	printf("\n The details of jobs are as follows: ");
	printf("\n JOB_ID    DEADLINE    PROFIT");
	for(i=1;i<=n;i++)
	{
		printf("\n   %s        %d          %d",job_no[i].job_id,job_no[i].deadline,job_no[i].profit);
	}

    // FIRST STEP : SORTING ALL JOBS IN DESCENDING ORDER OF PROFITS.
    
    for(i=1;i<n;i++)
	{
	for(j=i+1;j<=n;j++)
	{	
	if(job_no[i].profit <= job_no[j].profit)
	{
		temp = job_no[i];
		job_no[i] = job_no[j];
		job_no[j] = temp;
	}
	}
	}

	printf("\n\n The details of sorted jobs are as follows: ");
	printf("\n JOB_ID    DEADLINE    PROFIT");
	for(i=1;i<=n;i++)
	{
	printf("\n   %s        %d          %d",job_no[i].job_id,job_no[i].deadline,job_no[i].profit);	
	}
	
	// SECOND STEP : FINDING THE MAXIMUM DEADLINE OF ALL THE JOBS.
	
	max_deadline = job_no[1].deadline;
	for(i=1;i<=n;i++)
	{
		if(job_no[i].deadline > max_deadline)
		{
			max_deadline = job_no[i].deadline;
		}		
	}
	printf("\n The maximum deadline is %d.",max_deadline);
	
	job_sequencing_with_deadlines(n,job_no,max_deadline);
	
}



void job_sequencing_with_deadlines(int n,struct job job_no[n],int max_deadline)
{
	int i,j,k,flag = 1;
	struct job timeslot[MAX];
	int maxprofit =0;
	
	for(i=1;i<=n;i++)
	{
		timeslot[i].job_id[5] = "";
		timeslot[i].deadline = 0;
		timeslot[i].profit = 0;	
	}

    // JOB SEQUENCING PROGRAM
    
	for(i=1;i<=n;i++)
	{
		k = minimum(max_deadline,job_no[i].deadline);
		
		while(k>=1)
		{
			if(timeslot[k].deadline == 0)
			{
				timeslot[k] = job_no[i];
				break;
			}
			else 
			{
				k=k-1;	
			}
		}
	}
	
	printf("\n The required job sequence is : ");
	for(i=1;i<=n;i++)
	{
	if(timeslot[i].deadline != 0)
	printf(" %s ",timeslot[i].job_id);
	}
	
	
	// PRINTING THE REMAINING JOB PROGRAM 
	
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=n;j++)
	    {
	    	if(job_no[i].profit == timeslot[j].profit)
	    	{
	    	flag=1;
	    	break;
	    	}
	    	else
	    	{
			flag=0;
	    	continue;
	   		} 	
		}
		
		if(flag == 0)
		{
		printf("\n %s will not be completed.",job_no[i].job_id);
		}
		
	}  
	
	
	// FINDING THE MAXIMUM PROFIT PROGRAM
	
	for(i=1;i<=n;i++)
	{
	    if(timeslot[i].deadline != 0)
	    {
	    	maxprofit = maxprofit + timeslot[i].profit;
		}
	}
	printf("\n The maximum profit using job sequencing is %d units.",maxprofit);
	
}

