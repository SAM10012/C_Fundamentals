#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

struct poly
{
	int coeff;
	int exp;
	struct poly *link;
};


struct poly* create(struct poly*,int);
void display(struct poly*);
struct poly* polyadd(struct poly* ,struct poly* ,struct poly* );

void main()
{
	struct poly *head1=NULL,*head2=NULL,*head3=NULL;

	int ch,n1,n2;
	
	while(1)
	{
	printf("\n Press 1 to create \n Press 2 to display \n Press 3 to add \n Press 4 to exit \n");
	scanf("%d",&ch);
	
		switch(ch)
		{
			case 1:
				printf("\nEnter the no. of terms in polynomial 1: ");
				scanf("%d",&n1);
				head1=create(head1,n1);
				printf("\nEnter the no. of terms in polynomial 2: ");
				scanf("%d",&n2);
				head2=create(head2,n2);
				break;
			case 2:
				printf("\nThe first polynomial is: ");
				display(head1);
				
				printf("\nThe second polynomial is: ");
				display(head2);
				
				printf("\nThe resultant polynomial is: ");
				display(head3);
				break;
			case 3:
				head3=polyadd(head1,head2,head3);
				break;
			case 4:
				printf("\nTHE END!");
				exit(0);
				break;
			
		    default: 
				printf("\nInvalid choice...");
				break;
		}
	}
}


struct poly* create(struct poly* head,int n)
{
	int i;
	struct poly *p,*t;
	
	
	for(i=1;i<=n;i++)
	{
	p=(struct poly*)malloc(sizeof(struct poly));
	printf("\nEnter the coefficient of '%d' term: ",i);
	scanf("%d",&p->coeff);
	printf("\nEnter the exponent of '%d' term: ",i);
	scanf("%d",&p->exp);
	p->link=NULL;

if(head==NULL)
	head=t=p;
else
{
	t->link=p;
	t=p;
}
}

return head;
}

void display(struct poly* header)
{
	struct poly *temp=header;
	while(temp!=NULL)
	{
		printf("%dx^%d",temp->coeff,temp->exp);
		temp=temp->link;
		if(temp!=NULL)
		printf(" + ");
	}
}

struct poly* polyadd(struct poly *h1,struct poly *h2,struct poly *h3)
{
	struct poly *p,*t,*h=h2;
	int flag=0;
	while(h1!=NULL&&h2!=NULL)
	{
	p=(struct poly*)malloc(sizeof(struct poly));
	p->link=NULL;
		if(h1->exp > h2->exp)
		{
			while(h!=NULL)
			{
				if(h1->exp==h->exp)
				{
					p->coeff=h1->coeff + h->coeff;
					p->exp=h1->exp;
					int flag=1;
					break;
				}
				else
				{
					h=h->link;
				}
			}
			
			if(flag==0)
			{
				h=h2;
				p->coeff=h1->coeff;
				p->exp=h1->exp;
			}
			h1=h1->link;	
		}
		else if(h1->exp < h2->exp)
		{
		while(h!=NULL)
			{
				if(h1->exp==h->exp)
				{
					p->coeff=h1->coeff + h->coeff;
					p->exp=h1->exp;
					int flag=1;
					break;
				}
				else
				{
					h=h->link;
				}
			}
			
			if(flag==0)
			{
				p->coeff=h1->coeff;
				p->exp=h1->exp;
			}
		h2=h2->link;
		}
		else 
		{
			p->coeff = h1->coeff + h2->coeff;
			p->exp = h1->exp;
			h1=h1->link;
			h2=h2->link;
		}
		
		if(h3==NULL)
		{
			h3=t=p;
		}
		else
		{
			t->link=p;
			t=p;
		}
	}//end of while
	
	if(h1==NULL)
	{
		t->link=h2;
		
	}
	else if(h2==NULL)
	{
	   t->link=h1;
	   
	}
	return h3;
}


	
