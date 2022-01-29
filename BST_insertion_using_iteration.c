#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#define MAX 15
struct node
{
	struct node *left_ptr;
	int data;
	struct node *right_ptr;
};
struct node *root_node;

struct node* insert_iteratively_in_BST(struct node*,int);


void push(struct node*,struct node* []);
struct node* pop(struct node* []);
int top=-1;

int iterative_search(struct node*,int);

int recursive_search(struct node*,int);


struct node* inorder(struct node *);
struct node* preorder(struct node *);
struct node* postorder(struct node *);

void iinorder(struct node *);
void ipreorder(struct node *);
void ipostorder(struct node *);



void main()
{
	int item,ch,item_to_be_searched,ch1,result,result1;
	
	while(1)
	{
	printf("\n Do you want to enter a node (Press 1 for yes and 0 for no): ");
	scanf("%d",&ch);
	if(ch==1)
	{
	printf("\n Enter the value of the node: ");
	scanf("%d",&item);
	root_node=insert_iteratively_in_BST(root_node,item);
	}
	else if(ch==0)
	break;
    }
	
	while(1)
	{
	printf("\n Do you want to enter an item for searching ? (Press 1 for yes and 0 for no): ");
	scanf("%d",&ch1);
	if(ch1==1)
	{
		printf("\n If item is present it will show 1 otherwise 0...");
		printf("\n Enter the item to be searched: ");
		scanf("%d",&item_to_be_searched);
		result = iterative_search(root_node,item_to_be_searched);
		if(result==1)
		printf("\n %d is present in the BST. ",item_to_be_searched);
		else
		printf("\n %d is not present in the BST. ",item_to_be_searched);
	}
	else
	break;
	}
	
	
	result1 = recursive_search(root_node,6);
	printf("%d ",result1);
	result1 = recursive_search(root_node,5);
	printf("%d ",result1);
	result1 = recursive_search(root_node,1);
	printf("%d ",result1);
	
	printf("\n The preorder traversal is: ");
	preorder(root_node);
	
	printf("\n The inorder traversal is: ");
	inorder(root_node);
	
	printf("\n The postorder traversal is: ");
	postorder(root_node);
	
	
	
	
	printf("\n\n\n The preorder traversal using iteration is: ");
	ipreorder(root_node);
	
	printf("\n The inorder traversal using iteration is: ");
	iinorder(root_node);
	
	printf("\n The postorder traversal using iteration is: ");
	ipostorder(root_node);
	
	
	
}

struct node* insert_iteratively_in_BST(struct node* root_node,int item)
{
	struct node *new_node, *child_node, *parent_node;
	
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data = item;
	new_node->left_ptr = new_node->right_ptr = NULL;
	
	if(root_node==NULL)
	{
		root_node=new_node;
	}
	else
	{
		child_node = root_node;
		while(child_node!=NULL)
		{
			parent_node = child_node;
			
			if(item > child_node->data)
				child_node = child_node->right_ptr;
			else if(item < child_node->data)
				child_node = child_node->left_ptr;
				
		}
		
		if(item > parent_node->data)
			parent_node->right_ptr = new_node;
		else if(item < parent_node->data)
			parent_node->left_ptr = new_node;
		
		}
		
		printf(" %d inserted successfully.",item);
		return root_node;
	}
	
struct node* inorder(struct node *root_node)
{
	if(root_node!=NULL)
	{
	   inorder(root_node->left_ptr);
	   printf(" %d ",root_node->data);
	   inorder(root_node->right_ptr);
	}
}

struct node* preorder(struct node *root_node)
{
	if(root_node!=NULL)
	{
	   printf(" %d ",root_node->data);
	   preorder(root_node->left_ptr);
	   preorder(root_node->right_ptr);
	}
}

struct node* postorder(struct node *root_node)
{
	if(root_node!=NULL)
	{
	   postorder(root_node->left_ptr);
	   postorder(root_node->right_ptr);
	   printf(" %d ",root_node->data);
	}
}

void push(struct node* item,struct node* a[])
	{
		if(top==MAX-1)
		{
			exit(0);
		}
		top=top+1;
		a[top]=item;
	}
struct node* pop(struct node* a[])
	{
		struct node* item;
		if(top==-1)
		{
			exit(0);
		}
		item=a[top];
		top=top-1;
		return item;
	}

void ipreorder(struct node* root_node)
{
	struct node *N;
	struct node* stack[MAX];
	push(root_node,stack);
	while(top!=-1)
	{
		N = pop(stack);
		if(N!=NULL)
		{
			printf(" %d ",N->data);
			push(N->right_ptr,stack);
			push(N->left_ptr,stack);
			
			
		}
	}
}
	
	
void iinorder(struct node* root_node)
{
	struct node *P;
	struct node* stack[MAX];
	P = root_node;
	while(top!=-1 || P!=NULL)
	{
		while(P!=NULL)
		{
			push(P,stack);
			P=P->left_ptr;
		}
		if(top!=-1)
		{
			P = pop(stack);
			printf(" %d ",P->data);
			P = P->right_ptr;
		}
	}
	
}
	
void ipostorder(struct node* root_node)
{
	struct node *P,*N;
	struct node* stack[MAX];
	P = root_node;
    top=0;
	while(top!=-1)
	{
		while(P!=NULL)
		{
			push(P,stack);
			if(P->right_ptr!=NULL)
				push(NULL,stack);
			P = P->left_ptr;
		}
		N = pop(stack);
		if(N!=NULL)
			printf(" %d ",N->data);
		else
		{
			N = pop(stack);
			P = N->right_ptr;
			push(N,stack);
		}
	}
}

int iterative_search(struct node* root_node,int search_item)
{
	while(root_node!=NULL)
	{
		if(search_item < root_node->data)
			root_node = root_node->left_ptr;
		else if(search_item > root_node->data)
			root_node = root_node->right_ptr;
		else
		return 1;
		
	}


	return 0;
}

int recursive_search(struct node* root_node,int search_item)
{
	if(root_node==NULL)
	return 0;
	else if(root_node->data==search_item)
	return 1;
	else if(search_item > root_node->data)
	recursive_search(root_node->right_ptr,search_item);
	else if(search_item < root_node->data)
	recursive_search(root_node->left_ptr,search_item);
	
	
}
