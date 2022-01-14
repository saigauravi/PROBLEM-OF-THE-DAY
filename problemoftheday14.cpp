class Solution {
public:
    int mySqrt(int x) {
        long low=1,high=x;
        long sqrt;
        while(low<=high)
        {
            long mid=low+(high-low)/2;
            if(mid*mid<=x)
            {
                sqrt=mid;
                low=mid+1;
            }
            else
                high=mid-1;
        } return sqrt;

    }
};
