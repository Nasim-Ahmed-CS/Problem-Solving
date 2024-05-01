class Solution {
public:
    int arrangeCoins(int n) {
        long long val = (sqrt(1 + (8LL * n)) - 1) / 2;
        return val;
    }
};
