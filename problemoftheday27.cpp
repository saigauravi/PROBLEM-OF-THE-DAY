class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i=0,j=people.size()-1,boats=0;
        sort(people.begin(),people.end());
        while(i<=j)
        {
        if(i==j)
        {
            boats++;
            break;
        }
            else if(people[i]+people[j]<=limit)
            {
                boats++;
                i++;
                j--;
            }
            else
            {
                j--;
                boats++;
            }

        } return boats;
    }
};
