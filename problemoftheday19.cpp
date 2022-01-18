class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),count=0;
        if(n==1)
            return nums[0];
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {count++;
            if(count>=(n/2))
                return nums[i];
        }

        else count=1;
    }
    return -1;
}
};
