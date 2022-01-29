#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
typedef struct node ND;
ND* ins_front(ND*);

ND* ins_end(ND*);

ND* ins_after(ND*,int,int);

ND* ins_before(ND*,int,int);

ND* del_front(ND*);

ND* del_end(ND*);

ND* del_any(ND*,int);

void display(ND*);

void count(ND*);

void rev_display(ND*);

ND* head=NULL;
int main()
{
	int ch,item,key;
	do
	{
		printf("\n 1:insert front:");
		printf("\n 2:insert end:");
		printf("\n 3:insert after a node:");
		printf("\n 4:insert before a node:");
		printf("\n 5:delete front node:");
		printf("\n 6:delete end node:");
		printf("\n 7:delete any node:");
		printf("\n 8:display linked list:");
		printf("\n 9:count number of nodes:");
		printf("\n 10:reverse display:");
		printf("\n 0:to exit");
		printf("\n enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:head=ins_front(head);
				break;
			case 2:head=ins_end(head);
				break;
			case 3:
				printf("\n enter a key value after which a node to be inserted:");
				scanf("%d",&key);
				printf("\n enter a value for new node:");
				scanf("%d",&item);
				head=ins_after(head,key,item);
				break;
			case 4:
				printf("\n enter a key value before which a node to be inserted:");
				scanf("%d",&key);
				printf("enter a value to be inserted:");
				scanf("%d",&item);
				head=ins_before(head,key,item);
				break;
			case 5:
				head=del_front(head);
				break;
			case 6:
				head=del_end(head);
				break;
			case 7:
				printf("enter a node value to be deleted");
				scanf("%d",&key);
				del_any(head, key);
				break;
			case 8:
				display(head);
				break;
			case 9:
				count(head);
				break;
			//case 10: rev_display(head);
			//break;
			case 0:
				printf("\n the end");
				break;
			default:
				printf("\n invalid choice:");
				break;
		}
		}
		while(ch!=0);
	    }
	    
	    ND* ins_front(ND* head)
	    {
		ND *temp;
		int item;
		temp=(ND*)malloc(sizeof(ND));
		if(temp==NULL)
		{
			printf("\n insufficient memory");
			exit(0);
		}
		printf("\n enter node value:");
		scanf("%d",&item);
		temp->info=item;
		temp->link=head;
		head=temp;
		return(head);
		}
		ND*ins_end(ND* head)
		{
			ND*temp,*prev;
			int item;
			temp=(ND*)malloc(sizeof(ND));
			if (temp==NULL)
			{
				printf("\n insufficient memory");
				exit(0);
			}
			printf("\n enter node value:");
			scanf("%d",&item);
			temp->info=item;
			temp->link=NULL;
			if(head==NULL)
			head=temp;
			else
			{
				prev=head;
				while(prev->link!=NULL)
				{
					prev=prev->link;
				}
				prev->link=temp;
			}
			return(head);
		}
			ND*ins_after(ND* head,int key,int item)
	        {
	        	ND *temp,*ptr;
	        	temp=(ND*)malloc(sizeof(ND));
	        	if(temp==NULL)
	        	{
	        		printf("\n insuffiecient memory");
	        		exit(0);
				}
			    if (head==NULL)
				{
			    printf("linked list is empty and no key is found");
			    exit(0);
				}
			else
			{
				ptr=head;
				while(ptr->info!=key && ptr!=NULL)
				{
					ptr=ptr->link;
				}
				if(ptr->info==key)
				{
					temp->info=item;
					temp->link=ptr->link;
					ptr->link=temp;
				}
				else printf("\n key not found,no insertion");
			}
			return(head);
		}
		ND*ins_before(ND*head,int key,int item)
		{
			ND*temp,*prev,*current;
			temp=(ND*)malloc(sizeof(ND));
			if(temp==NULL)
			{
			printf("\n insuffecient memory");
			exit(0);
			}
			if(head==NULL)
			{
				printf("\n linked list is empty no key found");
				exit(0);
			}
			prev=current=head;
			while(current->info!=key && current!=NULL)
			{
				prev=current;
				current=current->link;
			}
			if(current->info==key)
			{
				temp->info=item;
				temp->link=current;
				prev->link=temp;
			}
			else printf("\n no key is found");
			return(head);
		}
		ND*del_front(ND*head)
		{
			ND*ptr;
			if (head==NULL)
			{
				printf("\n linked list is empty,no deletion");
				exit(0);
			}
			ptr=head;
			head=ptr->link;
			printf("\n deleted element is %d",ptr->info);
			free(ptr);
			return(head);
		}
		ND*del_end(ND*head)
		{
			ND*ptr,*prev;
			if(head==NULL)
			{
				printf("\n Linked list is empty");
				exit(0);
			}
			ptr=head;
			while(ptr->link!=NULL)
			{
				prev=ptr;
				ptr=ptr->link;
			}
			prev->link=ptr->link;
			printf("\n deleted element is %d",ptr->info);
			free(ptr);
			return(head);
			}
		ND* del_any(ND*head,int key)
			{
				ND*prev,*current;
				if (head==NULL)
			{
				printf("\n linked list is empty,no deletion");
				exit(0);
			}
			prev=current=head;
			while(current->info!=key && current!=NULL)
			{
				prev=current;
				current=current->link;
			}
			if(current->info=key)
			{
			prev->link=current->link;
			printf("\n deleted element is %d",current->info);
			free(current);
			}
			else
			{
				printf("\n linked list is empty,no deletion");
			}
			return(head);
		}
		void count(ND*ptr)
		{
		int count=0;
		while(ptr!=NULL)
		{
		 count++;
		 ptr=ptr->link;
		}
		printf("\n total node is %d",count);
		}
		void display(ND *ptr)
		{
			while(ptr!=NULL)
			{
				printf("\n %d",ptr->info);
				ptr=ptr->link;
			}
		}
	
