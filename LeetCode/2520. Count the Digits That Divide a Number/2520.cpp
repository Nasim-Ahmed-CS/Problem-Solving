class Solution {
public:
    int countDigits(int num) {
        int ans = 0;
        int value = num;
        while(num > 0){
            int x = num % 10;
            if(value % x == 0)ans++;
            num /= 10;

        }
        return ans;
    }
};
