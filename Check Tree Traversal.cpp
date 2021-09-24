struct node{
       int data ; 
       node* left  ; 
       node* right  ; 
       node(int x)
       {
           data = x ; 
           left = NULL ; 
           right = NULL ; 
       }
};

unordered_map<int,int> pretoin ; 

vector<int> found_post ;

int pos = 0 ;
int maxreach  ; 

node* formtree(int pre[], int s , int e)
{
     
      if(pos >= maxreach or s > e) return NULL ; 
      
      int val = pre[pos] ; 
      
      int x = pretoin[val] ; // x is position in inorder ; 
      
      pos++ ; 
      
      node* root = new node(val) ; 
      
      
      root->left = formtree(pre ,  s , x-1) ; 
      
      root->right = formtree(pre ,  x+1 , e) ; 
      
}

void  postorder_trav(node* root)
{
      if(root == NULL) return ; 
      
      postorder_trav(root->left) ; 
      postorder_trav(root->right) ; 
      
      found_post.push_back(root->data) ; 
}

class Solution{
    public:
    
    bool checktree(int pre[], int in[], int post[], int n) 
    { 
         for(int i = 0 ; i<n ; i++)
         {
             pretoin[in[i]] = i ; 
         }
         
         pos = 0 ;
         maxreach = n ; 
         
    	 node* root = formtree(pre , 0 , n-1 ) ; 
    	
    	 found_post.clear() ; 
    	 
    	 postorder_trav(root) ; 
    	 
    	 if(found_post.size() != n) return 0 ; 
    	 
    	 //debc(post) ; 
    	 //debc(found_post) ; 
    	 
    	 for(int i = 0; i<n ; i++)
    	 {
    	     if(found_post[i] != post[i]) return 0 ; 
    	 }
    	 
    	 return 1 ; 
    }

};
