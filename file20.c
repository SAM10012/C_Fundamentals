#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int arr[11],i;
	fp=fopen("myfile10.txt","rb");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
fread(arr,sizeof(arr[0]),9,fp);
for(i=0;i<10;i++)
printf("\n%d",arr[i]);
fclose(fp);
	
}
