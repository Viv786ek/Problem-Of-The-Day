 int maxLen(vector<int>&v, int n)
    {   
        // Your code here
        map<int,int> m;//cur_sum,index
       int sum=0;
       int mx=0;
       for(int i=0;i<n;i++)
       {
           sum+=v[i];
           if(m.find(sum)==m.end())
           {
               m[sum]=i;
           }
           else
           {
               int cur=i-m[sum];
               mx=max(mx,cur);
           }
           if(sum==0)
           {
               mx=max(mx,i+1);
           }
           
       }
       return mx;
    }
