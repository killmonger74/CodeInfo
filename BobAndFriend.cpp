/**
    https://www.codechef.com/problems/BFRIEND
    Codechef user->kdrana_123
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    	freopen("input.txt","r",stdin);
    	freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
    	long long n,a,b,c;
    	cin>>n>>a>>b>>c;
    	long long mi=1e10;
    	long long x;
    	for(int i=0;i<n;i++)
    	{
    		cin>>x;
    		mi=min(mi,abs(x-b)+abs(x-a));
    	}
    	
    	cout<<mi+c<<endl;
    }
	return 0;

	
}