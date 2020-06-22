///*** Given a array of size 10^6 and you have to find the maximum length of the increasing sub-array  **/
#include<bits/stdc++.h>
#define push_back pb
using namespace std;
int dp[100000];

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &x : v)cin>>x;
    dp[0]=1;
    for(int i=1;i<v.size();i++){
        if(v[i-1]<v[i])dp[i]=max(dp[i],1+dp[i-1]);
        else dp[i]=1;

    }
    int ans=0;
    for(int i=0;i<v.size();i++){
        ans=max(ans,dp[i]);
    }
    cout<<ans<<endl;

return 0;}




