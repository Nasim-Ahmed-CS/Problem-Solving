class Solution {
public:
    long long countVowels(string word) {
        long long i, ans = 0, sub = 0, k, n = word.length();

        for(i = 0; i < n; i++){
            long long x = i + 1;
            ans += ((x * (x + 1)/2));
            if(word[i] != 'a' && word[i] != 'e' && word[i] != 'o' && word[i] != 'i' && word[i] != 'u'){
                k = ((n - i) * (i + 1));
                sub += k;
            }
        }
        return ans - sub;
    }
};
