class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low = 0, high = num, mid, ans = -1;
        while(low <= high){
            mid = (low + high) / 2;
            long long val = mid * mid;
            if(val == num){
                ans = mid;
                break;
            }
            else if(val > num){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        if(ans != -1)return true;
        else return false;
    }
};
