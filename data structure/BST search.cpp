#include<iostream>
using namespace std;
 
struct node
{
	int data;
	struct node *left,*right;
};
static bool flag=false;
struct node *createNode(int item)
{
	struct node *temp=new node;
	temp->left=NULL;
	temp->right=NULL;
	temp->data=item;
	return temp;
}

void searchNode(struct node *root,int item)
{
	if(root==NULL)
	return ;
	else
	{
		if(root->data==item)
		{
			flag=true;
			return;
		}
	    if( flag==false && root->left!=NULL)
	    
	      {
		    searchNode(root->left,item);
	        }
	if( flag==false && root->right!=NULL)
	searchNode(root->right,item);
	
   }
}

void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
	
}
int main()
{
	struct node * root=NULL;
	root=createNode(1);
	root->left=createNode(2);
	root->right=createNode(3);
	root->left->left=createNode(4);
	root->left->right=createNode(5);
	root->right->right=createNode(6);
	searchNode(root,6);
	if(flag)
	cout<<"\n found";
	else
	cout<<"\n not found";
	return 0;
}



