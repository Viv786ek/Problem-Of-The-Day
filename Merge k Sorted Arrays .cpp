class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        priority_queue<pair<int,pair<int,int>>> pq;
        for(int i=0;i<K;i++){
            pq.push(make_pair(-1*arr[i][0],make_pair(i,0)));
        }
        vector<int> res;
        while(!pq.empty()){
            pair<int,pair<int,int>> top = pq.top();
            pq.pop();
            res.push_back(top.first * -1);
            int row = top.second.first;
            int col = top.second.second;
            if(col+1 < K)
                pq.push(make_pair(-1*arr[row][col+1],make_pair(row,col+1)));
        }
        return res;
    }
};
