class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int k) {
         vector<int> vect;
        int i=0,j=numbers.size()-1;
        while(i<j)
        {
            if(numbers[i]+numbers[j]==k)
            { vect.push_back(i+1);
             vect.push_back(j+1);
            break;}
            else if(numbers[i]+numbers[j]<k)
            i++;
            else
            j--;
        }
        return vect;
    }
};
