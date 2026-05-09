#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
using namespace std;

int main(){
    long long n,m;
    cin>>n>>m;
    multiset<long long> a;
    for(int i=0;i<n;i++){
        long long y;
        cin>>y;
       a.insert(y);
    }
    for(int i=0;i<m;i++){
        long long x;
        cin>>x;
        auto it = a.lower_bound(x);

if(it == a.end()){
    if(a.empty()){
        cout << -1 << endl;
    }else{
        it--;
        cout << *it << endl;
        a.erase(it);
    }
}
else if(*it == x){
    cout << *it << endl;
    a.erase(it);
}
else{
    if(it == a.begin()){
        cout << -1 << endl;
    }else{
        it--;
        cout << *it << endl;
        a.erase(it);
    }
}
}
    
    return 0;
}