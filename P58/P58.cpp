class Solution {
public:
    int lengthOfLastWord(string s) {
        
    bool flag = 0;
    int n = 0;
    int ret = 0;
    char c;
    for (int i = 0; i < s.length(); i++)
    {
        c = s[i];
        if (flag)
        {
            //still words
            if (c==' ')//end of words
            {
                ret = n;
                n=0;
                flag=0;

            }
            else//still words
            {
                n++;
            }
        }
        else
        {
            //words begin
            if (c != ' ')
            {
                flag=1;
                n++;
            }
        }

    }
    if (n != 0)
    {
        ret = n;
    }

    return ret;
    }
};