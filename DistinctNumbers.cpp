#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<long long,long long> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    cout<<(int)mp.size()<<endl;
    return 0;
}