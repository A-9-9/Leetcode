class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool flag = digits[digits.size()-1]==9;
        if (!flag)
        {
            digits[digits.size()-1]++;
            return digits;
        }
        flag=0;
        for (int i = digits.size()-1; i >= 0; i--)
        {
            if (digits[i] == 9)
            {
                digits[i]=0;
                if (i==0)
                    flag=1;
            }
            else
            {
                digits[i]++;
                return digits;
            }
        }
        if (flag)
        {
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};