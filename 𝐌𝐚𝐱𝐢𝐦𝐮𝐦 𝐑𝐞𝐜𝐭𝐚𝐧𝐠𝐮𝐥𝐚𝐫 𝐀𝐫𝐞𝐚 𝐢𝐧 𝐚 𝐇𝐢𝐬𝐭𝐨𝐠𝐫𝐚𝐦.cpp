 long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        stack<int> st;  //most popular Q
        long long ans=-1;
        for(int i=0; i<n; i++)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
            {
                int x=st.top();
                st.pop();
                long long temp=arr[x]*(st.empty()? i : i-st.top()-1);
                ans=max(temp,ans);
            }
            st.push(i);
        }
        while(!st.empty())
        {
            int x=st.top();
            st.pop();
            long long temp=arr[x]*(st.empty()? n : n-st.top()-1);
            ans=max(ans,temp);
        }
        return ans;
    }
