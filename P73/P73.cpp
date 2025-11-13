class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> zero;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j]==0)
                {
                    vector<int> tempV = {i, j};
                    zero.push_back(tempV);
                }
            }
        }
        bool *x = new bool[matrix.size()];
        bool *y = new bool[matrix[0].size()];
        for (int i = 0; i < matrix.size(); i++)
            x[i]=0;
        for (int i = 0; i < matrix[0].size(); i++)
            y[i]=0;
        //bool x[matrix.size()] = {false};
        //bool y[matrix[0].size()] = {false};
        for (vector<int> v : zero)
        {
            //corresponding row set to 0 already
            if (!x[v[0]])
            {
                x[v[0]]=1;
                for (int i = 0; i < matrix[0].size(); i++)
                {
                    matrix[v[0]][i] = 0;
                }
            }

            //corresponding column set to 0 already
            if (!y[v[1]])
            {
                y[v[1]]=1;
                for (int i = 0; i < matrix.size(); i++)
                {
                    matrix[i][v[1]] = 0;
                }
            }
        }
        delete [] x;
        delete [] y;
    }
};