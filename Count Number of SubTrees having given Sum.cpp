int coun(Node* root,int x,int&count)
{
   if(root==NULL)
   return 0;
   int l = coun(root->left,x,count);
   int r = coun(root->right,x,count);
   if(l+r+root->data==x)
   count++;
   return l+r+root->data;
   
}
int countSubtreesWithSumX(Node* root, int X)
{
  if(root==NULL)
  return 0;
  int count=0;
  coun(root,X,count);
  return count;
}
