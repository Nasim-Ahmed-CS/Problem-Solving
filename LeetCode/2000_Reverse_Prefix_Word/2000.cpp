class Solution {
public:
    string reversePrefix(string word, char ch) {
        string empty;
        int j = -1;
        for(int i = 0; i < word.length(); i++){
            empty.push_back(word[i]);
            if(word[i] == ch){
                j = i + 1;
                break;
                
            }
        }
        if(j == -1){
            return word;
        }
        else{
            reverse(empty.begin(), empty.end());
            for(; j < word.length(); j++){
                empty.push_back(word[j]);
            }
        }
        return empty;

    }
};
