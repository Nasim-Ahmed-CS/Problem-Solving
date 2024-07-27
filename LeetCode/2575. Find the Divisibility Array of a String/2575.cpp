class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int>ans;
        long long carry = 0, value = 0;
        long long x, i, j;
        for(i = 0; i < word.length(); i++){
            x = word[i] - 48;
            value = (carry * 10) + x;
            carry = value % m;
            if(carry == 0)ans.push_back(1);
            else ans.push_back(0); 
        }
        return ans;
    }
};
