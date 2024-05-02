class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size(), i, j, k, l, r, ll, rr;
        
        sort(nums.begin(), nums.end());

        vector<int>dp(n, 1);
        vector<int>index(n);
        for(i = 0; i < n; i++)index[i] = i;
        int ans = 1;
        for(i = 1; i < n; i++){
            for(j = 0; j < i; j++){
                if(nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i]){
                    dp[i] = dp[j] + 1;
                    index[i] = j;
                    ans = max(ans, dp[i]);
                }
            }
        }
        for(i = n-1; i >=0; i--){
            if(dp[i] == ans)break;
        }
        vector<int>ans_vec;
        while(true){
            ans_vec.push_back(nums[i]);
            if(i == index[i])break;
            i = index[i];
        }
        return ans_vec;
    }
};
