int lis(vector<int> v)
 {
     vector<int> lis;
     
     for(int i=0;i<v.size();i++)
     {
          auto it = lower_bound(lis.begin(), lis.end(), v[i]);
         if(it!=lis.end())
         *it=v[i];
         else
         lis.push_back(v[i]);
     }
     return lis.size();
 }
 
 
   int minInsAndDel(int a[], int b[], int n, int m) {
       // code here
       unordered_map<int,int> mb;
       int count;
       for(int i=0;i<m;i++)
       {
           mb[b[i]]++;
       }
       
       vector<int> new_a;
       
       for(int i=0;i<n;i++)
       {
           if(mb.find(a[i])!=mb.end())
           new_a.push_back(a[i]);
       }
       
       //step 1
       // deletion of those element which are not in b but present in a
       count=n-new_a.size() ;
       
       int lis_length=lis(new_a);
       
       // step 2
       // deletion of those element which are not in increasing sequence
       count=count +  new_a.size()-lis_length;
       
       // step 3
       // insertion of those element which are not in above lis sequence
       count =count + m-lis_length;
       
       return count;
   }
