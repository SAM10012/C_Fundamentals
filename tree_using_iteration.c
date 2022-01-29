#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node
{
	int key;
	struct node *left;
	struct node *right;
};
struct node *root;
struct node* newnode(int item)
{
	struct node* newone;
	newone=(struct node*)malloc(sizeof(struct node));
	newone->key=item;
	newone->left=newone->right=NULL;
	return newone;
}

struct node* insert_using_iteration(struct node* root,int item)
{
	 
    struct node* x = root;
    struct node* y = NULL;
 
    while (x != NULL) 
	{
        y = x;
        if (item < x->key)
            x = x->left;
        else
            x = x->right;
    }
 
 
    if (y == NULL)
        y = newnode(item);
      
    else if (item < y->key)
        y->left = newnode(item);
 
 
    else
        y->right = newnode(item);
 
    return y;
}

search_using_ite(struct node* root,int data)
{

while(root!=NULL)
{
	if(data<root->key)
	root=root->left;
	else if(data>root->key)
	root=root->right;
	else
	return 1;
}
return 0;
	
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


void main()
{
	int item,ch,data;
	do{
		printf("Enter the key to be inserted: ");
		scanf("%d", &item);
		root = insert_using_iteration(root, item);
		printf("%d inserted successfully.\n", item);
		printf("Do you want to insert another node(1/0): ");
		fflush(stdin);
		scanf("%d", &ch);
	}while(ch!=0);
	
	printf("\n The preorder traversal: ");
	preorder(root);
	
	printf("\n The postorder traversal: ");
	postorder(root);
	
	printf("\n The inorder traversal: ");
	inorder(root);
	
	
	printf("\n Element is found = 1 AND element is not found = 0 ");
	printf("\n Enter the element to be searched: ");
	scanf("%d",&data);
	
	printf("\n The search (using iteration) for %d is %d",data,search_using_ite(root,data));
}

