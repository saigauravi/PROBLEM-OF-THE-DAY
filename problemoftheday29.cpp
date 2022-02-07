class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightsum=0,leftsum=0;
      for(int i=1;i<nums.size();i++)
          rightsum+=nums[i];
        if(rightsum==0)
            return 0;
        for(int i=1;i<nums.size();i++)
        {
            leftsum+=nums[i-1];
            rightsum-=nums[i];
            if(leftsum==rightsum)
                return i;
        }
        return -1;
    }
};
