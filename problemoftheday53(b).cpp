int findTriplets(int a[], int n)
    {
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-1;j++){
                for(int k=0;k<n;k++){
                    if(i==j||i==k||j==k||i==j==k)
                    continue;
                    if(a[i]+a[j]+a[k]==0)
                    return 1;
                }
            }
        }return 0;
    }
