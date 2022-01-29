#include<stdio.h>
#include<math.h>
void main()
{
	int physics[20],sum,z=0,i,j;
	float average,var,sd;
	for(i=0;i<20;i++)
	{
		printf("Enter the marks:\n");
		scanf("%d",&physics[i]);
		sum=sum+physics[i];
	}
	average=(sum/20);
	for(j=0;j<20;j++)
	{
		z=(z+(physics[i]-average)*(physics[i]-average));
			}
			var=(z/20);
			sd=sqrt(var);
			printf("The S.D of the marks is %f",sd);
}
