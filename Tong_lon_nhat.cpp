#include<bits/stdc++.h>
using namespace std;
struct node{
	int key;
	node*left;
	node*right;
	node(int x)
	{
		this->key=x;
		left=right=NULL;
	}
};
void addNODE(int u,int v,char x,node**root)
{
	if((*root)!=NULL&&(*root)->key==u)
	{
		if(x=='L') (*root)->left= new node(v);
		else (*root)-> right=new node(v);
	}
	else
	{
	if((*root)->left!=NULL) addNODE(u,v,x,&(*root)->left);
	if((*root)->right!=NULL) addNODE(u,v,x,&(*root)->right);
	}
}
int max(int a, int b)
{ return (a >= b)? a: b; }

int maxPathSumUtil( node *root, int &res)
{

    if (root==NULL) return 0;
    if (!root->left && !root->right) return root->key;
    int ls = maxPathSumUtil(root->left, res);
    int rs = maxPathSumUtil(root->right, res);

    if (root->left && root->right)
    {

        res = max(res, ls + rs + root->key);
        return max(ls, rs) + root->key;
    }

    return (!root->left)? rs + root->key:ls + root->key;
}

int maxPathSum(struct node *root)
{
    int res = INT_MIN;
    maxPathSumUtil(root, res);
    return res;
}
main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,u,v;
		char x;
		cin>>n>>u>>v>>x;
		node*root=new node(u);
		addNODE(u,v,x,&root);
		for(int i=2;i<=n;i++)
		{
			cin>>u>>v>>x;
			addNODE(u,v,x,&root);
		}

	cout<<maxPathSum(root)<<endl;



	}
}
