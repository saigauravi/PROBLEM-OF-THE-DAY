class Solution {
public:
    int findPeakElement(vector<int> nums) {
     int start=0,end=nums.size()-1;
        while(start<end)
        {
            int c=(start+end)/2;
            if(nums[c]<nums[c+1])
                start=c+1;
            else
                end=c;
        }
        return start;
    }
};
