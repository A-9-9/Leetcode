class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> v;
        for (string s : operations)
        {

            if (s=="+")
            {
                v.push_back(v[v.size()-1]+v[v.size()-2]);
            }
            else if (s=="D")
            {
                v.push_back(v[v.size()-1]*2);
            }
            else if (s=="C")
            {
                v.pop_back();
            }
            else
            {
                v.push_back(stoi(s));
            }
        }

        int ret = 0;
        for (int i : v)
            ret += i;
        return ret;
    }
};