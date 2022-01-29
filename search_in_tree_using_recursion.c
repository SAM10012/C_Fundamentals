#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node 
{
	int key;
	struct node *left;
	struct node *right;
};

struct node* Create();
struct node* MakeBST(struct node*,struct node*);
int search(struct node*,int);
void main()
{
	int ch;
	struct node* root=NULL;
	struct node *newnode;
	
	root=Create();
	
	printf("\n______________________________TREE_____________________________________ ");
	while(1)
	{

	printf("\n Enter 1 to make another node and 0 to exit :");
	scanf("%d",&ch);
	
	if(ch==1)
	{
		newnode=Create();
		root=MakeBST(root,newnode);
	}
	else
	break;
}
	printf("\n Search for 10 = %d",search(root,10));
	printf("\n Search for 100 = %d",search(root,100));
	
	
}


struct node* Create()
{
	int data;
	struct node* q;
	q=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter the data : ");
	scanf("%d",&data);
	q->left=NULL;
	q->right=NULL;
	q->key=data;
	return q;
	
}

struct node* MakeBST(struct node* root,struct node* newnode)
{
	while(1)
	{
		if(newnode->key<root->key)
		{
			if(root->left==NULL)
			{
				root->left=newnode;
				return root;
			}
			else
			{
				root=root->left;
			}
		}
		else
		{
				if(root->right==NULL)
			{
				root->right=newnode;
				return root;
			}
			else
			{
				root=root->right;
			}
			
		}
	}
}

int search(struct node *root,int data)
{
	if(data==root->key)
	return 1;
	else if(data<root->key)
	{
		root=root->left;
		search(root,data);
	}
	else if(data>root->key)
	{
		root=root->right;
		search(root,data);
	}
	else
	return 0;
}


	
	

