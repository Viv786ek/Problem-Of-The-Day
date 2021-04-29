
class Solution
{
    public:
    //Function to find the largest number after k swaps.
    // Function to find maximum
// integer possible by
// doing at-most K swap operations
// on its digits
void findMaximumNum(
    string str, int k,
    string& max, int i)
{
    // return if no swaps left
    if (k == 0)
        return;
 
    int n = str.length();
 
    // Consider every digit after
    // the cur position
    char maxm = str[i];
    for (int j = i + 1; j < n; j++) {
        // Find maximum digit greater
        // than at ctr among rest
        if (maxm < str[j])
            maxm = str[j];
    }
 
    // If maxm is not equal to k,
    // decrement k
    if (maxm != str[i])
        --k;
 
    // search this maximum among the rest
    for (int j = i; j < n; j++) {
        // If digit equals maxm swap
        // the digit with current
        // digit and recurse for the rest
        if (str[j] == maxm) {
            // swap str[ctr] with str[j]
            swap(str[i], str[j]);
 
            // If current num is more than
            // maximum so far
            if (str.compare(max) > 0)
                max = str;
 
            // recurse other swaps after cur
            findMaximumNum(str, k, max, i + 1);
 
            // Backtrack
            swap(str[i], str[j]);
        }
    }
}
    string findMaximumNum(string str, int k)
    {
       // code here.
       string max = str;
    findMaximumNum(str, k, max, 0);
    return max;
    }
};
