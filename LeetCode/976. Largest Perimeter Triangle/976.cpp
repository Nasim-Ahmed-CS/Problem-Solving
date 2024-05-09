class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        for(int i = nums.size() - 3; i >= 0; i--){
            int x = nums[i], y = nums[i + 1], z = nums[i + 2];
            if(x + y > z && y + z > x && x + z > y){
                ans = x + y + z;
                break;
            }
        }
        return ans;
    }
};
