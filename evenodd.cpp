/**
http://codeforces.com/problemset/problem/318/A

*/
#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define ss second
#define ff first
#define vi std::vector<int>
using namespace std;
namespace kuldeep{
	void print(string name){
		cout<<name<<endl;
	}
	void sort(std::vector<int>&v){
		sort(v.begin(), v.end());
	}
}

vi adj[100000];
int vis[100000];
bitset<100000>seive;
bool is_prime(int a){
	if(a==1)return false;
	if(a==2)return true;
	if(a==3)return true;
	if(a%2==0)return false;
	if(a%3==0)return false;
	for(int i=2;i*i<=a;i++){
		if(a%i==0)return false;
	}

	return true;
}

void for_graph(){
	auto make_it=[&](int a,int b){
		adj[a].pb(b),adj[b].pb(a);
	};
	return ;
}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	ll n,k;
	cin>>n>>k;
	ll no_odds;
	ll even;
	  if(n&1)
	   no_odds=n/2+1;
	 
	  if(k<=no_odds){
	  		cout<<1+(k-1)*2<<endl;
	  }
	  else{
	  	even=k-no_odds;
	  	cout<<2*even<<endl;
	  }
	return 0;
}