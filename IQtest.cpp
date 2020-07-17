#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> v;
int sum=0;
int a;
for(int i=0;i<n;i++){
    cin>>a;
    if(a&1)v.push_back(1);
    else v.push_back(0);
    sum+=v.back();
}
if(sum==1){
    for(int i=0;i<v.size();i++){
        if(v[i]==1)cout<<i+1<<endl;

    }
}
else {
    for(int j=0;j<v.size();j++){
        if(v[j]==0)cout<<j+1<<endl;
    }
}
return 0;
}

