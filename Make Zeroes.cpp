class Solution {
public:
    void MakeZeros(vector<vector<int> >& matrix) {
        // Code here
        int n = matrix.size() ;
int m = matrix[0].size() ;
vector<vector<int>> visited( n , vector<int> (m ,-1)) ;
for(int i = 0 ; i < n ; i++){
for(int j = 0 ; j< m ;j++){
if(matrix[i][j] == 0){
int sum = 0 ;
if(i+1 < n){
sum = sum + matrix[i+1][j] ;
visited[i+1][j] = 0;
}
if(j+1 < m){
sum = sum + matrix[i][j+1] ;
visited[i][j+1] = 0;
}
if(i-1 >= 0 ){
sum = sum + matrix[i-1][j] ;
visited[i-1][j] = 0;
}
if(j-1 >= 0){
sum = sum + matrix[i][j-1] ;
visited[i][j-1] = 0;
}
visited[i][j] = sum ;
}
}
}
for(int i = 0 ; i < n ; i++){
for(int j = 0 ; j < m ;j++){
if(visited[i][j] !=-1)
matrix[i][j] = visited[i][j];
}
}
    }
};
