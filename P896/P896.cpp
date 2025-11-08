class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if (nums.size()==1)
        return 1;
    int index = 1;
    while (index < nums.size())
    {
        if (nums[0]!=nums[index])
        {
            break;
        }
        index++;
    }
    if (index >= nums.size()-1)
    {
        return 1;
    }


    bool flag = nums[index] > nums[0];//1 if increase, 0 otherwise
    if (flag)
    {
        for (int i = index; i < nums.size()-1; i++)
        {
            if (nums[i] > nums[i+1])
            {
                return 0;
            }
        }
        return 1;
    }
    else
    {
        for (int i = index; i < nums.size()-1; i++)
        {
            if (nums[i] < nums[i+1])
            {
                return 0;
            }
        }
        return 1;
    }
        
    }
};