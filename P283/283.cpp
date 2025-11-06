class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int p1 = 0;
        int p2 = 0;
        bool flag1 = 1;
        bool flag2 = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i]==0 && flag1)
            {
                p1=i;
                flag1=0;
            }
            if (nums[i] != 0 && flag2)
            {
                flag2=0;
                p2=i;
            }
            if (!flag1&&!flag2)
                break;
        }
                if (p1==0&&p2==0)
            return;
        //cout << p1 << endl;cout << p2 << endl;
        for (int i = p2; i < nums.size(); i++)
        {
            
            if (nums[i] != 0)
            {
                 if (p1 > i)
                    continue;
                int temp = nums[i];
                nums[i]=nums[p1];
                nums[p1]=temp;
                p1++;
                while (p1!=nums.size()-1 &&nums[p1]!=0)
                {
                    p1++;
                }
                if (p1==nums.size()-1)
                    return;
            }
        }
        return;
    }
};