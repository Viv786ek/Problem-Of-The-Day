class Solution{
public:
    vector<int> querySum(int n, int arr[], int q, int queries[])
    {
        // code here
        vector<int> res;
       int i=0;
       while(i<2*q){
           int sum=0;
           for(int j=queries[i]-1; j<=queries[i+1]-1; j++){
               sum+=arr[j];
           }
           res.push_back(sum);
           i+=2;
       }
       return res;
    }
};
