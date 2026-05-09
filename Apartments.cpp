#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    vector<long long> a(n),b(m);
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    int c=0;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0;
    while(i<n && j<m){
        if((a[i]>=(b[j]-k)) && (a[i]<=(b[j]+k))){
             i++;
             j++;
             c++;
        }else if((a[i]<(b[j]-k))){
            i++;
        }else{
            j++;
        }
    }
    cout<<c<<endl;
    return 0;
}