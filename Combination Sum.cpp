void calSum(vector<int>A,int B,vector<vector<int>>&res,vector<int>&temp,int index){
        if(B==0){
            res.push_back(temp);
            return;
        }
        
        for(int i=index;i<A.size();++i){
            if(B-A[i] >=0){
                temp.push_back(A[i]);
                B -= A[i];
                
                calSum(A,B,res,temp,i);
                
                B += A[i];
                temp.pop_back();
            }
        }
    }
    
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        sort(A.begin(),A.end());
        A.erase(unique(A.begin(),A.end()),A.end());
        
        vector<int>temp;
        vector<vector<int>> res;
        
        calSum(A,B,res,temp,0);
        return res;
    }
