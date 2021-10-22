 vector<int> topView(Node *root)
    {
        //Your code here
        map<int,int> m;
       queue<pair<Node*,int>> q;
       q.push({root,0});
       while(!q.empty()){
           auto it=q.front();
           q.pop();
           Node *curr=it.first;
           int pos=it.second;

       //We will add only top of any position to map
       /*If map already contains element of this pos then this node will not be visible in top view*/

           if(m.find(pos)==m.end())
               m[pos]=curr->data;
           
           if(curr->left!=NULL)
               q.push({curr->left,pos-1});
               
           if(curr->right!=NULL)
               q.push({curr->right,pos+1});
           
       }
       vector<int> ans;
       for(auto i:m)
           ans.push_back(i.second);
       return ans;
    }
