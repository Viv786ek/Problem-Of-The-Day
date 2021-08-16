//https://practice.geeksforgeeks.org/problems/minimum-cost-path3833/1

struct cell
	{
		int x;
		int y;
		int distance;
		bool operator<(cell other)const{
			if(distance == other.distance){
				if(x != other.x)
					return x < other.x;
				return y < other.y;
			}
			return distance < other.distance;
		}
	};
	
    //these list store 4 possible moves from current cell.
	vector<int>dx = {-1,1,0,0};
	vector<int>dy = {0,0,1,-1};
	
	//Function to check if cell indexes are within bounds.
	bool isValid(int x, int y, int n, int m){
		return (x >=0 and x < n and y >=0 and y < m);
	}
	
	//Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid) 
    {
    	int n = grid.size();
    	int m = grid[0].size();
    	
    	//dp list to store minimum cost to reach each cell.
    	vector<vector<int>>dp(n, vector<int>(m, INT_MAX));
    	
    	//using a set to store cell indexes and minimum cost to reach that cell.
    	set<cell>st;
    	st.insert({0,0,0});
    	dp[0][0] = grid[0][0];
    	
    	while(!st.empty())
    	{
    	    //storing first element of set and erasing it from set.
    		auto cur = *st.begin();
    		st.erase(st.begin());
    		
    		//iterating over 4 possible neighbours of current cell.
    		for(int i = 0; i < 4; i++)
    		{
    			int x = cur.x + dx[i];
    			int y = cur.y + dy[i];
    			
    			//if cell indexes are within bounds and dp value at 
    			//neighbouring cell+current cell value is less than at 
    			//current cell, we update dp value at current cell and
    			//insert cell index with dp value in set.
    			if(isValid(x,y,n,m) and dp[x][y]>dp[cur.x][cur.y]+grid[x][y])
    			{
    				if(dp[x][y] != INT_MAX)
    					st.erase(st.find({x, y, dp[x][y]}));
    				dp[x][y] = dp[cur.x][cur.y] + grid[x][y];
    				st.insert({x, y, dp[x][y]});
    			}
    		}
    	}
    	//returning dp value at bottom right corner cell.
    	return dp[n-1][m-1];
