#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<climits>
#include<unordered_map>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> v(n);

    for(int i = 0; i < n; i++) {
       cin>>v[i];
    }
    long long sum =0;
    long long maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum += v[i];
        maxi = max(maxi,sum);
      if(sum<0){
          sum=0;
      }
    }
    cout<< maxi<< endl;
    return 0;
}