class Solution {
  public:
    void prank(long long a[], int n){
        long long temp[n]={0};
        for(int i=0;i<n;i++)
     temp[i]=a[a[i]];
        for(int i=0;i<n;i++)
        a[i]=temp[i];
    }
};
