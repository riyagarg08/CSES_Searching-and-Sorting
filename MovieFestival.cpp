#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<pair<long long,long long>> v;

    for(int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        v.push_back({b, a});
    }

    sort(v.begin(), v.end());

    long long c = 1;
    long long t = v[0].first;

    for(int i = 1; i < n; i++) {

        if(v[i].second >= t) {
            c++;
            t = v[i].first;
        }
       
    }

    cout << c << endl;
}