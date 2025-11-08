class Solution {
public:
    string toLowerCase(string s) {
        string ret = "";
        for (char c : s)
    {
        if (c>='A' && c <= 'Z')
        {
            ret += char(c+('a'-'A'));
        
        }
        else
        {
            ret += c;
            
        }

    }
    return ret;
    }
};