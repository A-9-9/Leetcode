class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = 0;
        for (char c : s)
            n -= c;
        for (char c : t)
            n += c;
        return char(n);
    }
};