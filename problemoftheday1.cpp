#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	int n,d;
	cin>>n>>d;
	int x[n],i;
	for(i=0;i<n;i++)
	cin>>x[i];
	for(i=d;i<n;i++)
	cout<<x[i]<<" ";
	for(i=0;i<d;i++)
	cout<<x[i]<<" ";
	cout<<endl;
	}

	return 0;
}
