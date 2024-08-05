class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int i = 0, j = 0;
        
        // Merge characters alternately while both strings have characters left
        while (i < word1.size() && j < word2.size()) {
            ans += word1[i++];
            ans += word2[j++];
        }
        
        // Append remaining characters from the longer string
        while (i < word1.size()) {
            ans += word1[i++];
        }
        while (j < word2.size()) {
            ans += word2[j++];
        }
        
        return ans;
    }
};