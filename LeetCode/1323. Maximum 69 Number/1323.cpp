class Solution {
public:
    int maximum69Number (int num) {
        vector<int>vi;
        int n = num;
        while(n > 0){
            int x = n % 10;
            vi.push_back(x);
            n /= 10;
        }
        int ans = 0, flag = 1;
        while(!vi.empty()){
            int x = vi.back();
            if(vi.back() == 6 and flag == 1){
                x = 9;
                flag = 0;
            }
            ans *= 10;
            ans += x;
            vi.pop_back();
        }
        return ans;
    }
};
