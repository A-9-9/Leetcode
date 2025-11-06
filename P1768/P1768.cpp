class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
    int n = 0;
    
    int len1 = word1.length();
    int len2 = word2.length();
    while (n < len1 || n < len2)
    {
        if (n<len1)
            ans += word1.substr(n, 1);
        if (n < len2)
            ans += word2.substr(n, 1);
        n++;
    }
    
    return ans;
    }
};