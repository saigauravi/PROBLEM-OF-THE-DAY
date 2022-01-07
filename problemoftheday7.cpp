class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
             return false;
        long num=x,rev=0;
        while(x!=0)
        {
            rev=rev*10;
            rev+=x%10;
            x=x/10;
        }
        if(num==rev)
             return true;
        else
             return false;
    }
};
