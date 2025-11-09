class Solution {
public:
    string fn(int(*n)[3])
    {
         int ret = 0;
        int ret2=0;
        bool flag = 0;// exist any 0
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                ret += n[i][j];
                ret2 += n[j][i];
                if (n[i][j] == 0)
                    flag=1;
            }
            if (ret == 3 || ret2==3)
                return "A";
            if (ret == -3||ret2==-3)
                return "B";
            ret = 0;
            ret2=0;
        }

        if (n[0][0]+n[1][1]+n[2][2]==3||n[0][2]+n[1][1]+n[2][0]==3)
            return "A";
        if (n[0][2]+n[1][1]+n[2][0]==-3||n[0][0]+n[1][1]+n[2][2]==-3)
            return "B";
        if (flag)
            return "Pending";
        return "Draw";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int n[3][3] = {0};
        bool flag = 1;
        for (vector<int> i : moves)
        {
            if (flag)
            {
                n[i[0]][i[1]]=1;//A
                flag = 0;
            }
            else
            {
                n[i[0]][i[1]]=-1;//B
                flag=1;
            }
        }
        return fn(n);
    }
};