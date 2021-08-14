class Solution {
  public:
    vector<long long> distributeCandies(int N, int K) {
        // code here
        vector<long long> v(K, 0);
long long i = 1;
int j = 0;
while(N > 0) {
v[j % K] += i;
N -= i;
i++;
j++;
if(i >= N) {
v[j % K] += N;
break;
}
}
return v;
        /*vector<long long>v(K,0);
        int i=1;
        int j=0;
        while(N>0){
            v[j%K] += i;
            N -= i;
            i++;
            j++;
            
            if(i>=N){
                v[j%K] += N;
                break;
            }
        }
        return v;*/
        
    }
};
