class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ret = 0;
        int dimension = mat.size();
        int index = 0;
        for (int i = 0; i < dimension/2; i++)
        {
            ret += mat[i][index] + mat[i][dimension-index-1] + mat[dimension-index-1][index] + mat[dimension-index-1][dimension-index-1];
    //        cout << n[i][index] << n[i][dimension-index-1] << endl;
    //        cout << n[dimension-index-1][index] << n[dimension-index-1][dimension-index-1] << endl;
            index++;
        }
        if (dimension % 2 == 1)
        {
            ret += mat[dimension/2][dimension/2];
        }
        return ret;
    }
};