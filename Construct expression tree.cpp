et* constructTree(char postfix[])
{
//code here
stack<et*> st;
int n=strlen(postfix);
for(int i=0;i<n;i++){
   if(isalpha(postfix[i])){
       et *node = (struct et *)malloc(sizeof(struct et)); //new node allocation
           node->value = postfix[i];
           node->left = 0;
           node->right = 0;
           st.push(node);
   }
   else
   {et *node1,*node2,*node3;
           node3 = (struct et *)malloc(sizeof(struct et));
           node3->value = postfix[i];
           node2 = st.top();
           node3->right = node2;
           st.pop();
           node1 = st.top();
           node3->left = node1;
           st.pop();
           st.push(node3);}
           
}
return st.top();
}
