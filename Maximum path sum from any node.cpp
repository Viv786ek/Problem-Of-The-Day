//https://practice.geeksforgeeks.org/problems/maximum-path-sum-from-any-node/1

class Solution {
  public:
  /*int helper(Node *root,int max_sum){
    if(!root)
        return 0;
    
    int left_sum=helper(root->left,max_sum);
    int right_sum = helper(root->right,max_sum);
    
    int a= root->data;
    int b=left_sum + root->data;
    int c=root->data+ right_sum;
    int d=left_sum + root->data + right_sum;
    
    max_sum = max({max_sum,a,b,c,d});
    
    return max({a,b,c,d,0});
  }
  
  */
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  // we will propagate the max sum from bottom to top
    int path_helper(Node *root, int &max_sum) {
        // base case
        if(!root)
            return 0;
        // recursive calls: postorder: LRN
        int left_sum = path_helper(root->left, max_sum);
        int right_sum = path_helper(root->right, max_sum);
        
        // there could be 4 cases
        // case-1: root node only
        int opt1 = root->data;
        // case-2: left subtree + root node
        int opt2 = root->data + left_sum;
        // case-3: right subtree + root node
        int opt3 = root->data + right_sum;
        // case-4: left subtree + root + right subtree
        int opt4 = left_sum + root->data + right_sum;
        
        // update the max sum to be the max of the 4 cases
        max_sum = max({max_sum, opt1, opt2, opt3, opt4});
        // if we encounter negative sum it's better to not consider it further {kadane's}
        // root should return max sum with atmost one child only: discard propagation of opt4
        return max({opt1, opt2, opt3, 0});
    }
    //Function to return maximum path sum from any node in a tree.
    int findMaxSum(Node* root)
    {
        // Your code goes here
        if(!root)
            return 0;
        int max_sum = INT_MIN;
        path_helper(root, max_sum);
        return max_sum;
    }
};
