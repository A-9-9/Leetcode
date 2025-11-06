class Solution {
public:
    bool isAnagram(string s, string t) {
            if (s.length()!= t.length())
        return false;
    int n[26]={0};
    for (int i = 0; i < s.length(); i++)
    {
        n[s[i]-'a']++;
    }
    for (int i = 0; i < t.length(); i++)
    {
        n[t[i]-'a']--;
    }
    for (int i = 0; i < 26; i++)
        if (n[i] != 0)
            return false;
    return true;
    }
};