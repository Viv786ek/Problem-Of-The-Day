class Solution{
  public:
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        int i=0,j=m-1;
        while(i>=0 and i<n and j>=0 and j<m)
        {
            if(matrix[i][j] == x){
                return 1;
            }
            else if(matrix[i][j] > x){
                j--;
            }
            else{
                i++;
            }
        }
        return 0;
    }
};
