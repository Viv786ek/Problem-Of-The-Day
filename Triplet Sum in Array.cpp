bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
    for(int i=0;i<n-2;i++){
        if(i==0 || (i>0 && A[i]!=A[i+1])){
            int l=i+1,h=n-1;
            int sum =A[i];
            while(l<h){
                if(A[l]+A[h]+sum==X){
                    return true;
                }
                else if(A[l]+A[h]+sum < X)
                    l++;
                else
                    h--;
            }
        }
    }
    return false;
    }
