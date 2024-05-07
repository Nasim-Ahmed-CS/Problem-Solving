class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        map<int, int>mp;
        for(auto it : nums){
            int n = it;

            for(int i = 2; i * i <= n;i++){
                while(n % i == 0){
                    mp[i]++;
                    n /= i;
                }
            }
            if(n > 1)mp[n]++;
        }
        return mp.size();
    }
};
