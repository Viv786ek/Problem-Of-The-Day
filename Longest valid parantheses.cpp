class Solution{
public:
    int maxLength(string S){
        // code here
         int ind = -1, maxi = 0;
        stack<int> st;
        for(int i = 0;i < S.size();i++){
            if(S[i] == '(')
                st.push(i);
            else{
                if(!st.empty()){
                    st.pop();
                    if(!st.empty())
                        maxi = max(maxi, i-st.top());
                    else
                        maxi = max(maxi, i-ind);
                }
                else
                    ind = i;
            }
        }
        return maxi;
    }
};
