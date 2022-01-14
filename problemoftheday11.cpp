class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char k) {
        int low=0,high=letters.size()-1;
        if(letters[high]<=k)
            return letters[low];
        while(low<=high)
        {
            int c=low + (high-low)/2;
            if(letters[c]<=k)
                low=c+1;
            else
               high=c-1;
        }
        return letters[low];
    }
};
