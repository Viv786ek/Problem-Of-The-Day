class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> arr ,int n) {
        // code here
        set<vector<int>>s;
      vector<vector<int>>v;
      sort(arr.begin(),arr.end());
     do
      {
          if(s.find(arr)!=s.end())continue;
          v.push_back(arr);
          s.insert(arr);
      }while(next_permutation(arr.begin(),arr.end()));
     return v; 
    }
};
