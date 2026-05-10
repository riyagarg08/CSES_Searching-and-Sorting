#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<long long,long long>> events;

    for(int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;

        events.push_back({a, 1});   // arrival
        events.push_back({b, -1});  // leaving
    }

    sort(events.begin(), events.end());

    long long curr = 0;
    long long ans = 0;

    for(auto it : events) {
        curr += it.second;
        ans = max(ans, curr);
    }

    cout << ans << endl;
}