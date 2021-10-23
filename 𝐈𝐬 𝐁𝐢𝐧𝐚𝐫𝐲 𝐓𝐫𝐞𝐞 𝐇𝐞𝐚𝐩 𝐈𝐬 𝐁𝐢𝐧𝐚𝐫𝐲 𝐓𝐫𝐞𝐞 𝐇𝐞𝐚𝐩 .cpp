  bool isHeap(struct Node* tree) {
        // code here
        if(!tree) return true;
        queue<Node *> q;
        q.push(tree);
        while(!q.empty()){
            int size=q.size();
            vector<int> st;
            st.push_back(1);
            while(size--){
                Node *t=q.front();
                q.pop();
                if(t->left){ 
                    if(st.back()==0) return false;
                    if(t->data<t->left->data) return false;
                    q.push(t->left); 
                    st.push_back(t->left->data);
                    
                }
                else st.push_back(0);
                if(t->right){
                     if(st.back()==0) return false;
                     if(t->data<t->right->data) return false;
                    q.push(t->right);
                    st.push_back(t->right->data);}
                else st.push_back(0);
                 
                
            }
               
                
            }
            return true;

    }
