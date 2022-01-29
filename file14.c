#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int value;
	fp=fopen("myfile9.txt","wb");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	do{
		printf("\nEnter a value(press 0 to exit): ");
		scanf("%d",&value);
		if(value==0)
		break;
		fwrite(&value,sizeof(value),1,fp);
		
	}while(1);
	fclose(fp);
}
