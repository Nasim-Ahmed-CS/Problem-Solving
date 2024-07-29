class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int ans = 1, j = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(abs(nums[i] - nums[j]) > k){
                ans++;
                j = i;
            }
        }
        return ans;
    }
};
