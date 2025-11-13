class Solution {
public:
    vector<int> ret;
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int x = 0, y = 0, maxX=matrix.size()-1, maxY=matrix[0].size()-1, minX=0, minY=0;
        fn(matrix, x, y, maxX, maxY, minX, minY);
        return ret;
    }
    void fn(vector<vector<int>>& v, int &x, int &y, int &maxX, int &maxY, int& minX, int& minY)
    {
        //cout << endl << minX << ", " << minY << ", " << maxX << ", " << maxY << ", " << x << ", " << y << endl;
        if (minX > maxX && minY > maxY || minX > maxX && minY < maxY || minX < maxX && minY > maxY)
            return;
        if (minX == maxX)
        {
            while(y <= maxY)
            {
                //cout << v[x][y++] << ", ";
                ret.push_back(v[x][y++]);
            }
            y--;
            return;
        }
        if (minY==maxY)
        {
            while(x <= maxX)
            {
                //cout << v[x++][y] << ", ";
                ret.push_back(v[x++][y]);
            }
            x--;
            return;
        }
        //constrain
        //(1, 1) -> (1, 2)
        //(1, 1), (1, 2), (1, 3)
        while(y <= maxY)
        {
            //cout << v[x][y++] << ", ";
            ret.push_back(v[x][y++]);

        }
        y--;//(1, 2), (2, 2), (1, 2)
        while (++x <= maxX)
        {
            //cout << v[x][y] << ", ";
             ret.push_back(v[x][y]);
        }
        x--;//(1, 2), (1, )
        while (--y >= minY)
        {
            //cout << v[x][y] << ", ";
             ret.push_back(v[x][y]);
        }
        y++;
        while (--x > minX)
        {
            //cout << v[x][y] << ", ";
             ret.push_back(v[x][y]);
        }

        fn(v,++x, ++y, --maxX, --maxY, ++minX, ++minY);

    }
};