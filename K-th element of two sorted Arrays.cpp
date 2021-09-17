int kthElement(int arr1[], int arr2[], int n, int m, int k)
{
        if(k>m+n){
            return -1;
        }
        
         int i=0;
       int j=0;
       int c=0;
       while(i<n && j<m){
           if(arr1[i]<arr2[j]){
               c++;
               if(c==k) return arr1[i];
               i++;
           }
           else{
               c++;
               if(c==k) return arr2[j];
               j++;
           }
       }
       while(i<n){
           c++;
           if(c==k) return arr1[i];
           i++;
       }
       while(j<m){
           c++;
           if(c==k) return arr2[j];
           j++;
       }

    }
