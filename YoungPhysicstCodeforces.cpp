/** http://codeforces.com/problemset/problem/69/A */
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

	int n;
	 cin>>n;
	 int a,b,c;
	 ll sumx=0,sumy=0,sumz=0;
	 int flag=0;
	 for(int i=0;i<n;i++){
	 	cin>>a>>b>>c;
	 	sumx+=a;
	 	sumy+=b;
	 	sumz+=a;
	 }
	 (sumx==0 && sumy==0 && sumz==0)?cout<<"YES":cout<<"NO";

	return 0;
}