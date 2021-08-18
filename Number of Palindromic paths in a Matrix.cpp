//https://practice.geeksforgeeks.org/problems/number-of-palindromic-paths-in-a-matrix0819/1

using ll = long long int;
	ll mod = 1e9 + 7;
	ll add(ll x, ll y) {
		return ((x%mod) + (y%mod))%mod;
	}
    // checks if index i,j is valid or not (lies inside matrix or not)
    bool isValid (int n, int m, int i, int j) {
        return !(i < 0 || i >= n || j < 0 || j >= m);
    }
    // return number of palindromic paths in matrix
    ll solvePalindromicPaths(vector<vector<char>> &matrix, int startRow, int startCol, int endRow, int endCol, map<pair<pair<int,int>,pair<int,int>>,ll> &dp) {
        int n = matrix.size(), m = matrix[0].size();
        
        // check if start and end cell indices are valid (are inside matrix)
        if (!isValid(n, m, startRow, startCol) || !isValid(n, m, endRow, endCol))
            return 0;
        // if start indices are after end indices, they can not meet in middle
        if (startRow > endRow || startCol > endCol)
        return 0;
        // if path does not follow palindromic property
        if (matrix[startRow][startCol] != matrix[endRow][endCol])
            return 0;
        // indices are adjacent to each other
        if (abs((startRow - endRow) + (startCol - endCol)) <= 1)
            return 1;
        // store indices as pair, since our map is using indices as key
        pair<pair<int,int>,pair<int,int>> indices = pair<pair<int,int>,pair<int,int>>
                                                    (pair<int,int>(startRow, startCol), pair<int,int>(endRow, endCol));
                                                    
        // if sub-problem has alredy been calculated
        if(dp.count(indices))
            return dp[indices];
            
        // if not calculated, calculate result by recursively calling in all directions
        ll countOfPalindromicPaths = 0;
        countOfPalindromicPaths = add(countOfPalindromicPaths, solvePalindromicPaths(matrix, startRow + 1, startCol, endRow - 1, endCol, dp));
        countOfPalindromicPaths = add(countOfPalindromicPaths, solvePalindromicPaths(matrix, startRow + 1, startCol, endRow, endCol - 1, dp));
        countOfPalindromicPaths = add(countOfPalindromicPaths, solvePalindromicPaths(matrix, startRow, startCol + 1, endRow - 1, endCol, dp));
        countOfPalindromicPaths = add(countOfPalindromicPaths, solvePalindromicPaths(matrix, startRow, startCol + 1, endRow, endCol - 1, dp));
        
        // store and return the result
        return dp[indices] = countOfPalindromicPaths;
    }
    
    int countPalindromicPaths(vector<vector<char>>matrix){
    	int n = matrix.size();
    	int m = matrix[0].size();
    	map<pair<pair<int,int>,pair<int,int>>,ll> dp;
    	return (int)(solvePalindromicPaths(matrix, 0, 0, n-1, m-1, dp)%mod);
    }
