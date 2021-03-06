class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector <int> ans(nums.size());
        stack <int> st;
        for(int i=nums.size()-2;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i]){
                st.pop();
            }
            st.push(nums[i]);
        }
         for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i]){
                st.pop();
            }

           ans[i]=st.size()==0 ?-1:st.top();
              st.push(nums[i]);
        }
    return ans;
    }
};
