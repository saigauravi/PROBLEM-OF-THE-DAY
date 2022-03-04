class Solution{
    public:

    // A[]: input array
    // N: size of array
    //Function to sort the array according to difference with given number.
    void sortABS(int a[],int n, int k)
    {
       vector<pair<int,int>>v;
       for(int i=0;i<n;i++)
       v.push_back({abs(a[i]-k),i});
       sort(v.begin(),v.end());
       int temp[n];
       for(int i=0;i<n;i++){
           temp[i]=a[v[i].second];

       }
       for(int i=0;i<n;i++)
       {
           a[i]=temp[i];
       }
    }

};
