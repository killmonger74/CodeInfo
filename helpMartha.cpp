/**
https://www.codechef.com/CENS2020/problems/CENS20G

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    	freopen("input.txt","r",stdin);
    	freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	string name;
	cin>>name;
	
	vector<int>p(4,0);
	
	int currx,curry;
	cin>>currx>>curry;
	int q;
	for(auto x:name)
	{
		if(x=='R')p[0]++;
		if(x=='L')p[1]++;
		if(x=='U')p[2]++;
		if(x=='D')p[3]++;
	}
	cin>>q;
	while(q--)
	{
		int x,y;
		cin>>x>>y;
		long long posx=abs(x-currx);
		long long posy=abs(y-curry);
		long long r,l,u,d;
		if(x>=currx && y>=curry)
		{
			r=p[0];
			u=p[2];
			if(r>=posx && u>=posy)
			{
				cout<<"YES "<<posy+posx<<endl;
			}
			else cout<<"NO\n";
		}
		else if(x>=currx && y<=curry)
		{
			r=p[0],d=p[3];
			if(r>=posx && d>=posy)
			{
				cout<<"YES "<<posy+posx<<endl;
			}
			else cout<<"NO\n";
		}
		else if(x<=currx &&y<=curry)
		{
			l=p[1];
			d=p[3];
		if(l>=posx && d>=posy)
			{
				cout<<"YES "<<posy+posx<<endl;
			}
			else cout<<"NO\n";

		}
		else if(x<=currx && y>=curry)
		{
			l=p[1],u=p[2];
			if(l>=posx && u>=posy)
			{
				cout<<"YES "<<posy+posx<<endl;
			}
			else cout<<"NO\n";
		}

}

}
	return 0;

	
}