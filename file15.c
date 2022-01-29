#include<stdio.h>
#include<conio.h>
#define max 9
void main()
{
	FILE *fp;
	int arr[max]={1000,500,100,50,20,10,5,2,1};
	int count;
	fp=fopen("myfile10.txt","wb");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(1);
	}
	count=fwrite(arr,sizeof(arr[0]),max,fp);
	if(count==max)
	printf("\nArray successfully written to binary file");
	else
	printf("\nArray not totally written to binary file");
	fclose(fp);
}
