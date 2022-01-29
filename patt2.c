#include<stdio.h>
#include<math.h>
void main()
{
	int r,c,k,j;
	for(r=5;r>=1;r--)
	{
		for(c=1;c<=5-r;c++)
		{
			printf("  ");
		}
		
			for(k=1;k<=2*r-1;k++)
			{
			printf("* ");
		}
		
		
		printf("\n");
	
}
}
