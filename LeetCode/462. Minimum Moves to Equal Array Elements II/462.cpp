class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int mid = n / 2, ans = 0, median;
        if(n % 2 == 0){
            median = (nums[mid] + nums[mid - 1]) / 2;
            
        }
        else{
            median = nums[mid];
        }

        for(auto it : nums){
            ans += abs(it - median);
        }
        return ans;
    }
};
