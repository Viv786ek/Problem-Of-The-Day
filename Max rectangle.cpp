int maxArea(int M[MAX][MAX], int n, int m) {
        int *a = new int[m]{0};
        
        int ans = 0;
        
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<m; j++) {
                if(M[i][j] == 0) {
                    a[j] = 0;
                } else {
                    a[j] += M[i][j];
                }
            }
            
            ans = max(ans, largestRow(a, m));
        }
        
        return ans;
    }
    
    
    int largestRow(int *h, int n) {
        int* rs = new int[n]{0};
        int* ls = new int[n]{0};
        
        stack<int> rss;
        stack<int> lss;
        
        for(int i = 0; i<n; i++) {
            if(rss.empty()) {
                rss.push(i);
            } else {
                if(h[rss.top()] <= h[i]) {
                    rss.push(i);
                } else {
                    while(!rss.empty() && h[rss.top()] > h[i]) {
                        rs[rss.top()] = i;
                        rss.pop();
                    }
                    rss.push(i);
                }
            }
        }
        
        while(!rss.empty()) {
            rs[rss.top()] = n;
            rss.pop();
        }
        
        
        
        for(int i = n-1; i>=0; i--) {
            if(lss.empty()) {
                lss.push(i);
            } else {
                if(h[lss.top()] <= h[i]) {
                    lss.push(i);
                } else {
                    while(!lss.empty() && h[lss.top()] > h[i]) {
                        ls[lss.top()] = i;
                        lss.pop();
                    }
                    lss.push(i);
                }
            }
        }
        
        while(!lss.empty()) {
            ls[lss.top()] = -1;
            lss.pop();
        }
        
        int ans = 0;
        
        for(int i = 0; i<n; i++) {
            if(ans < (rs[i]-ls[i]-1) * h[i]) {
                ans = (rs[i]-ls[i]-1) * h[i];
            }
        }
        
        return ans;
    }
