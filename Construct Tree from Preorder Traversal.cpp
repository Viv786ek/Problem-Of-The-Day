Node *func(int pre[],char arr[],int &id,int n)
{
if(id >=n) return NULL;
Node *root=new Node(pre[id]);
id++;
if(arr[id-1]=='L')
return root;
root->left=func(pre,arr,id,n);
root->right=func(pre,arr,id,n);
}
struct Node *constructTree(int n, int pre[], char arr[])
{
    // Code here
    int id=0;
return func(pre,arr,id,n);
}
