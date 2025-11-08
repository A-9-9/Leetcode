class Solution {
public:
    int convert(char &c, char* symbol, int *value)
    {
        for (int i = 0; i < 7; i++)
        {
            if (symbol[i]==c)
                return value[i];
        }
        return 0;
    }
    int romanToInt(string s) {
        //"MCMXCIV" 1000, 900, 90, 4
        char symbol[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int value[] = {1, 5, 10, 50, 100, 500, 1000};
        int n = convert(s[0], symbol, value);
        int cur;
        int pre = n;
        for (int i = 1; i < s.length(); i++)
        {
            cur = convert(s[i], symbol, value);
            if (cur > pre)
            {
                n -= pre*2;
                n += cur;
            }
            else
            {
                n += cur;
            }
            pre=cur;
        }
        return n;
    }
};