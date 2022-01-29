#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z,*px,*py,*pz;
	px=&x;
	py=&y;
	pz=&z;
	printf("Enter the three numbers:\n");
	scanf("%d%d%d",&x,&y,&z);
	if(*px>*py&&*px>*pz)
	printf("%d is maximum among the three numbers",*px);
	else
	{
		if(*py>*px&&*py>*pz)
		printf("%d is maximum among the three numbers",*py);
		else
		printf("%d is maximum among the three numbers",*pz);
	}
}
