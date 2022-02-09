// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

    public:
    int transfigure (string a, string b)
    {
    	int i=a.length()-1,j=b.length()-1,sum=0;
    	for(int i=0,j=0;i<a.length() ||j<b.length();i++,j++ )
    {if(i<a.length())
    sum+=a[i];
    if(j<b.length())
    sum-=b[j];
    }
    if(sum!=0)
    	return -1;
	int cnt=0;
    	while(i>=0 && j>=0)
    {	if(a[i]==b[j])
    	{i--,j--;}
    	else
    	{cnt++,i--;}

    }
    return cnt;
    }

};

// { Driver Code Starts.


int main ()
{
    int t; cin >> t;
    while (t--)
    {
        string A, B;
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}  // } Driver Code Ends
