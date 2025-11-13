class Solution {
public:
    bool isOdd(int& n)
    {
        return (n&1)==1;
    }
    int countOdds(int low, int high) {
        //return odd(low)+odd((high-low)/2)?(high-low)/2:(high-low)/2+1;
        if (low == high)
            return isOdd(low) ? 1 : 0;
        if ((high - low-1)==0)
            return 1;
        
        if (isOdd(low))
        {
            return (high-low)/2+1;
        }
        //11->12,13
        int temp = high-low;
        return isOdd(temp) ? (high-low)/2+1 : (high-low)/2;

    }
};