class Solution {
public:
    bool judgeCircle(string moves) {
        int vertical = 0;
        int horizon = 0;
        for (char c : moves)
        {
            if (c == 'R')
            {
                horizon++;
            }
            else if (c == 'L')
            {
                horizon--;
            }
            else if (c == 'U')
            {
                vertical++;
            }
            else
            {
                vertical--;
            }
        }
        return vertical== 0 && horizon == 0;
    }
};