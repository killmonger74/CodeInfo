#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define ss second
#define ff first
#define vi std::vector<int>
using namespace std;
namespace kd{
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
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	if(m>=n){
		if(n*a<=b)cout<<n*a<<endl;
		else cout<<b<<endl;

	}
	else{
		int c=(n/m)*b;
		if(n%m==0){
			cout<<min(n*a,c)<<endl;
		}
		else{
			cout<<min({n*a,c+(n%m)*a,c+b})<<endl;
		}

	}	
	return 0;
}