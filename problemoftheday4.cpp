#include<bits/stdc++.h>
using namespace std;



bool isPrime(long long n)
{
    if(n==1)
return false;
for(int i=2;i*i<=n;i++)
{
    if(n%i==0)
    return false;
}
return true;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
{
    cin>>n;
    if(isPrime(n))
    cout<<"No"<<endl;
    else
 cout<<"Yes"<<endl;

}
}
