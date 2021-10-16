 vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        unordered_map<int,int> m;
       vector<int> ans;
       int count = 0;
       for(int i=0;i<k;i++)
       {
           if(m[A[i]] == 0)
             count++;
           m[A[i]] += 1;  
       }
        ans.push_back(count);
       for(int i=k;i<n;i++)
       {
           if(m[A[i-k]] == 1)
             count--;
           m[A[i-k]] -= 1;
           
           if(m[A[i]] == 0)
             count++;
           m[A[i]] += 1;
           
           ans.push_back(count);
           
       }
       return ans;
    }
