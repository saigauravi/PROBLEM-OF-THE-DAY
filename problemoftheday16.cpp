#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,p,r=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
         p=n;
		 while(p!=0)
		 {r=p%100;
		 if(r==21)
		 break;
		 p=p/10;
		 }
		if(r==21||n%21==0)
		cout<<"The streak is broken!"<<endl;
		else
		cout<<"The streak lives still in our heart!"<<endl;
	}
}
