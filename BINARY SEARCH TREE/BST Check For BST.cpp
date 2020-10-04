#include<iostream>
#include<queue>
#include<climits>
using namespace std;
class node
{
	public:
	    int data;
		node*left;
		node*right;
		node(int d)
		{
			data=d;
			left=NULL;
			right=NULL;
		}	
};
bool isBST(node* root ,int minV=INT_MIN, int maxV=INT_MAX)
{
	if(root==NULL)
	{
		return true;
	}
	if(root->data>=minV and root->data<=maxV and isBST(root->left,minV,root->data) and isBST(root->right,maxV,root->data))
	{
		return true;
	}
	else
	{
	return false;
    }
}
node* insertinBST(node*root,int data)    //Accepts the old root node & data & returns the new node
{
	if(root==NULL)                   //base case
	{
		return new node(data);
	}
    if(data<=root->data)
    {
    	root->left=insertinBST(root->left,data);
	}
	else
	{
		root->right=insertinBST(root->right,data);
	}
	return root;
}
node*build()     //Read a list of numbers till -1 and also these numbers will be inserted in the BST
{
	int d;
	cin>>d;
	node*root=NULL;
	while(d!=-1) // as -1 encountered insertion stops
	{
		root=insertinBST(root,d);
		cin>>d;
	}
	return root;
}
void bfs(node*root)        //to print the tree 
{
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
		node*f=q.front();
		if(f==NULL)
		{
			cout<<endl;
			q.pop();
			if(!q.empty())
			{
				q.push(NULL); 
			}
		}
		else
		{
			cout<<f->data<<",";
			q.pop();
			if(f->left)
			{
				q.push(f->left);
			}
			if(f->right)
			{
				q.push(f->right); 
			}
		}
	}
	return ;
}
void inorder(node*root)     //printing left, root then right
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<",";
	inorder(root->right);
}
int main()
{
	node*root=build();
	inorder(root);
	cout<<endl;
	bfs(root);
	cout<<endl;
	if(isBST(root))
	{
		cout<<"yes it's a BST";
	}
	else
	{
		cout<<"Not a BST!!";
	}
	return 0;
}
/*
i/p:
  5 3 7 1 6 8 -1
o/p:
 1,3,5,6,7,8,
 5,
 3,7,
 1,6,8,
*/
