
class Solution
{
    public:
    void swap(auto x, auto y) {
        int temp = x;
        x = y;
        y = temp;
    }
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	bitset<32> bit(n);
    	for(int i=0;i<32;i+=2){
    	    swap(bit[i],bit[i+1]);
    	}
    	unsigned int ans = bit.to_ulong();
    	return ans;
    }
};
