
/**http://codeforces.com/problemset/problem/459/A*/
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
	int x,y,x1,y1;
	cin>>x>>y>>x1>>y1;
	
	int x2,x3,y2,y3;
	int dis;
	if(x==x1){
		if(y>y1)dis=y-y1;
		else dis=y1-y;
		if(x+dis>1000 )x2=x-dis,y2=y;
		else  x2=x+dis,y2=y;
		x3=x2,y3=y1;
		cout<<x2<<" "<<y2<<" "<<x3<<" "<<y3<<endl;
	}

	if(y==y1){
		if(x>x1)dis=x-x1;
		else dis=x1-x;
		if(y+dis>1000)y2=y-dis,x2=x;
		else y2=y+dis,x2=x;
		y3=y2,x3=x1;
	   cout<<x2<<" "<<y2<<" "<<x3<<" "<<y3<<endl;
	}

	if(x!=x1 && y!=y1){
		x2=x1,y2=y;
		x3=x,y3=y1;
			if(abs(x-x2)==abs(y3-y) && abs(x2-x)==abs(y1-y2))
			 cout<<x2<<" "<<y2<<" "<<x3<<" "<<y3<<endl;
		else cout<<-1<<endl;
	}

	return 0;
}