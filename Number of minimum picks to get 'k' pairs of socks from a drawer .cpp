int find_min(int a[], int n, int k) {
        // Your code geos here
         int p=0;int sum=0;
       for(int i=0;i<n;i++){
           p+=a[i]/2;
           if(a[i]%2==0){
               sum+=(a[i]-2)/2;
           }else{
               sum+=(a[i]-1)/2;
           }
       }
       if(p<k){
           return -1;
       }else if(sum>=k){
           return (2*(k-1))+n+1;
       }else{
           return (2*sum)+n+(k-sum);
       }
    }
