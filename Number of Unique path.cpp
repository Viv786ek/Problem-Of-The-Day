int nCr(int n, int r){
        /*
            nCr = n!/(r! * (n-r)!)
        */
        long res=1.0;
        for(int i=1;i<=r;++i){
            res = res*(n-r+i) / i;
        }
        return (int)res;
    }
    
    
    public:
    int NumberOfPath(int a, int b){
        
        // if there's a single row or column, only single path possible
        if(a==1 || b==1)return 1; 
        // we need b-1 steps to right to reach the right end
        int steps_to_right = b-1;
        // we need a-1 steps to right to reach the bottom
        int steps_down = a-1; 
        // total steps needed = sum of both
        int total_steps = steps_to_right + steps_down; 
        
        /*
        Now the answer will be nCr. Because we take a fixed number of right and down steps
        to reach the last cell. Since the number of steps is fixed, does this not becomes
        a combinational problem? If we need to take 5 Rights and 2 Down, imagine it as
        _ _ _ _ _ _ _ seven empty spaces. we can use combination to either fill 5R or 2L
        if we fill 5 R's then ->   R _ R R R _ R is a valid combination. 
        what's left empty will be filled by D's. So we fill the empty spaces with 
        r = min(Right, Down) to improve the time complexity. 
        */
        
        if(steps_down < steps_to_right)
            return nCr(total_steps, steps_down);
        return nCr(total_steps, steps_to_right);
    }
