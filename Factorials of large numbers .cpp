vector<int> factorial(int N){
        // code here
       vector<int>ans = {1};
		//Loop for Find factorial of N
		for (int i = 2; i <= N; i++)
		{
			int carry = 0;
			//Loop for step by step Multiplication
			//digit by digit Multiplication
			for (int j = 0; j < ans.size(); j++)
			{
				int mul = (ans[j] * i) + carry;
				ans[j] = mul % 10;
				carry = mul / 10;
			}
			//any carry then add in ans
			while (carry)
			{
				ans.push_back(carry % 10);
				carry = carry / 10;
			}
		}
		//reverse ans because our vector<int> ans contains factorial in reverse order
		reverse(ans.begin(), ans.end());
		return ans;
    }
