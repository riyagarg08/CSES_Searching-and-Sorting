#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    long long n,x;
    cin>>n>>x;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    int c=0;
   
    sort(a.begin(),a.end());
    int i=0,j=n-1;
    while(i <= j){
    if(a[i] + a[j] <= x){
        i++;
        j--;
    }else{
        j--;
    }
    c++;
}
    cout<<c<<endl;
    return 0;
}