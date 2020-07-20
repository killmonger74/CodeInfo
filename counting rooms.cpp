/*https://cses.fi/problemset/task/1193
This is the basics Graph algorithm for the problem in CSES
*/
#include<bits/stdc++.h>
using namespace std;
int vis[10001][10001];
bool isvalid(int x,int y,int &n,int &m,std::vector<std::vector<char>> &v){
	if(x<1 || y<1 || x>n  || y>m)return false;
	if(vis[x][y]==1 || v[x][y]!='.')return false;
	return true;
}
void dfs(int x,int y,int &n,int &m,std::vector<std::vector<char>>& v){
	vis[x][y]=1;
	if(isvalid(x+1,y,n,m,v))dfs(x+1,y,n,m,v);
	if(isvalid(x,y+1,n,m,v))dfs(x,y+1,n,m,v);
	if(isvalid(x,y-1,n,m,v))dfs(x,y-1,n,m,v);
	if(isvalid(x-1,y,n,m,v))dfs(x-1,y,n,m,v);
	return ;
}
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,m;
	cin>>n>>m;
	std::vector<std::vector<char>> v(n+1,vector<char>(m+1,'U'));
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			cin>>v[i+1][j+1];
		}

		int cnt=0;
		for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		{
			if(v[i+1][j+1]=='.'&&vis[i+1][j+1]==0)dfs(i+1,j+1,n,m,v),cnt++;
		}
		
	}
	cout<<cnt<<endl;
	
	return 0;
}