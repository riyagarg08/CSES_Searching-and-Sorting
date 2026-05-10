#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main() {
    long long n,x;
    cin >> n>>x;

    vector<long long> v(n);

    for(int i = 0; i < n; i++) {
       cin>>v[i];
    }
    int a=-1,b=-1;
    map<long long,long long> m;
    for(int i=0;i<n;i++){
       if(m.find(x-v[i])!=m.end()){
          a = m[x-v[i]];
          b=i+1;
          break;
       }
       m[v[i]]=i+1;
    }

   if(a==-1 || b==-1) cout<<"IMPOSSIBLE"<<endl;
   else cout << a<<" "<<b << endl;
}