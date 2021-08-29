class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
         vector<int>answer;
    if(root==NULL)
    {
       return answer;
    }
    else
    {
        map<int,vector<int>>m;
        int hd=0;
        queue<pair<Node*,int>>q;
        q.push(make_pair(root,hd));
        while(!q.empty())
        {
            pair<Node*,int>temp=q.front();
            q.pop();
            hd=temp.second;
            Node *node=temp.first;
            m[hd].push_back(node->data);
            if(node->left)
            {
                q.push(make_pair(node->left,hd-1));
            }
            if(node->right)
            {
              q.push(make_pair(node->right,hd+1));
            }
        }

        map< int,vector<int> > :: iterator it;
    for (it=m.begin(); it!=m.end(); it++)
    {
            answer.push_back( it->second[it->second.size()-1]);
    }
    return answer;
    }
    }
};
