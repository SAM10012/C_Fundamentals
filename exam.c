#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct dictionary
{
	char string[40];
	int count;
	struct dictionary *next;
};

struct dictionary *head=NULL;
struct dictionary *tail=NULL;

void main()
{
 
 struct dictionary info;
 struct dictionary *q;
 int n,i,j,k,l,count = 0;
 char keys[36][50];
 char word[20];
 
 struct dictionary *p;
 p=(struct dictionary*)malloc(sizeof(struct dictionary));
 
 printf("Enter the no. of keys: ");
 scanf("%d",&n);
 printf("Enter the values:\n ");
 for(i=0;i<n;i++)
 {
 	scanf("%s",keys[i]);
 }
 printf("\n The words are: \n");
 
	for(i=0;i<n;i++)
 {
 	printf("%s\n",keys[i]);
 }
	
 for(i=0;i<n;i++)
 {
 	word[i] = keys[36][i];
 	count =0;
 	for(j=0;j<n && keys[j]!=keys[i];j++)
 	{
 		if(keys[i] == keys[j])
 		{
 			count = count + 1;
		 }
 		
	 }
	 p->string[i] = keys[36][i];
	 p->count = count;
	 p->next=NULL;
	 if(head==NULL)
	 head=tail=p;
	 else
	 {
		tail->next=p;
		tail=p;
	 }
 }
 
    q = head;
	while(q!=NULL)
	{
	printf("The word is %s\n",q->string);
	printf("The count is %d\n",q->count);
	
	q=q->next;
}
}
