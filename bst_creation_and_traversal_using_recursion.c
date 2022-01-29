#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	struct node *left;
	int key;
	struct node *right;
};

struct node *root;

struct node* insert_a_node(int);
struct node* insert_in_bst_rec(struct node* ,int);

struct node* inorder(struct node*);
struct node* preorder(struct node*);
struct node* postorder(struct node*);

void main()
{
	int ch,item;
	while(1)
	{
		printf("\n Do you want to insert a node (Press 1 for yes and 0 for no): ");
		scanf("%d",&ch);
		if(ch==1)
		{
		printf("\n Enter the key : ");
		scanf("%d",&item);
		root = insert_in_bst_rec(root ,item);
		}
		else
		break;
	
	}
	
	printf("\n The preorder traversal is: ");
	preorder(root);
	
	printf("\n The inorder traversal is: ");
	inorder(root);
	
	printf("\n The postorder traversal is: ");
	postorder(root);
	
	
}

struct node* insert_a_node(int item)
{
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->key=item;
	newnode->left=newnode->right=NULL;
	return newnode;
}

struct node* insert_in_bst_rec(struct node* root,int item)
{
	if (root==NULL)
	root = insert_a_node(item);
	
	else if(item < root->key)
	{
		root->left = insert_in_bst_rec(root->left,item);
	}
	else if(item > root->key)
	{
		root->right = insert_in_bst_rec(root->right,item);
	}
	
	return root;
}

struct node* inorder(struct node *root)
{
	if(root!=NULL)
	{
	   inorder(root->left);
	   printf(" %d ",root->key);
	   inorder(root->right);
	}
}

struct node* preorder(struct node *root)
{
	if(root!=NULL)
	{
	   printf(" %d ",root->key);
	   preorder(root->left);
	   preorder(root->right);
	}
}

struct node* postorder(struct node *root)
{
	if(root!=NULL)
	{
	   postorder(root->left);
	   postorder(root->right);
	   printf(" %d ",root->key);
	}
}


