class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        if(n==1) return 0;
        int sum=0,i=0;
        while(n>1)
        {
            if(n%2==0)
            {
                sum+=(1<<i);
            }
            n/=2;
            i++;
        }
        return sum;
    }
};
