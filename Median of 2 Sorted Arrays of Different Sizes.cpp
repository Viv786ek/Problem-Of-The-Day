double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
         int n1=array1.size();
       int n2=array2.size();
       int n=n1+n2;
       vector <int> v(n);
       int sum=0;
    
      int i=0;
      int j=0;
      int k=0;
       while(i<n1 && j<n2)
       {
           if(array1[i]<array2[j])
           v[k++]=array1[i++];
           else{
               v[k++]=array2[j++];
           }
           
       }
       while(i<n1) v[k++]=array1[i++];
       while(j<n2) v[k++]=array2[j++];
       if(n%2)
       return (double)v[n/2];
       else
       return (double)(v[n/2-1]+v[n/2])/2;
    
    }
