//Creation of bst & its traversal
#include<iostream>
void mainmenu();
using namespace std;
class node
{
    public:
    node *left;
    node *right;
    int info;
};
class bst
{
    public:
    node *newnode;
    node *root;
    bst():root(NULL){}
    void insertion(node *,int,node *);
    void preorder(node*);
    void inorder(node*);
    void postorder(node*);
};
void bst::insertion(node *tree,int data,node *newnode)
{
    /*newnode= new node();
    newnode->info=data;
    newnode->left=NULL;
    newnode->right=NULL;*/
    if(tree==NULL)
    {
        tree=newnode;
        root=newnode;
    }
    else if(data<tree->info)
    {
        if(tree->left==NULL)
        {
            tree->left=newnode;
        }
        else
        {
            insertion(tree->left,data);
        }
    }
     else if(data>tree->info)
    {
        if(tree->right==NULL)
        {
            tree->right=newnode;
        }
        else
        {
            insertion(tree->right,data);
        }
    }

}
void bst::preorder(node *tree)
{
    node *temp=tree;
    if(temp!=NULL)
    {
        cout<<temp->info<<" ";
        preorder(temp->left);
        preorder(temp->right);

    }
}
void bst::inorder(node *tree)
{
    node *temp=tree;
    if(temp!=NULL)
    {
        inorder(temp->left);
        cout<<temp->info<<" ";
        inorder(temp->right);

    }
}
void bst::postorder(node *tree)
{
    node *temp=tree;
    if(temp!=NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        cout<<temp->info<<" ";

    }
}
void mainmenu()
{
    cout<<"\nOPERATION\n";
    cout<<"1.Insertion\n2.Preorder\n3.Inorder\n4.Postorder\n5.Exit\n";
}
int main()
{
    bst b;
    int a,n;
    bool decision=true;
    while(decision)
    {
        mainmenu();
        cout<<"Enter your choice::";
        cin>>n;
        switch (n)
        {
        case 1:
            cout<<"Enter the data to be insert::";
            cin>>a;
            newnode= new node();
            newnode->info=data;
            newnode->left=NULL;
            newnode->right=NULL
            b.insertion(b.root,a,b.newnode);
            break;
        case 2:
        b.preorder(b.root);
        break;
        case 3:
        b.inorder(b.root);
        break;
        case 4:
        b.postorder(b.root);
        break;
        case 5:
        decision=false;
        break;
        default:
        cout<<"Enter your choice between 1-5.\n";
            break;
        }
    }
    return 0;
}
