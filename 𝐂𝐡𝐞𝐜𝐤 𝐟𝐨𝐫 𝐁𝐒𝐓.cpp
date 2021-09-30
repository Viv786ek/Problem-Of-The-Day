bool isbst(Node* root,Node* min,Node*max){
        if(root==NULL)
            return true;
        if(min != NULL && root->data <= min->data)
            return false;
        if(max != NULL && root->data >= max->data)
            return false;
        bool leftvalid = isbst(root->left,min,root);
        bool rightvalid = isbst(root->right,root,max);
        
        return leftvalid && rightvalid;
    }
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        // Your code here
        return (isbst(root,NULL,NULL));
    }
