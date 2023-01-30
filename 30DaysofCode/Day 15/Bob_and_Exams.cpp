#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

unordered_map<int,vector<int>> m;

void solve(){
    int a,b;
    cin >> a >> b;

    unordered_set<int> s;
    for(auto i : m[a]){
        s.insert(i);
    }
    for(auto i : m[b]){
        s.insert(i);
    }
    int ans = accumulate(s.begin(),s.end(),0);
    cout << ans << endl;
    return;

}

int main() {
    m[1] = {1};
    m[2] = {2};
    m[3] = {1,2};
    m[4] = {4};
    m[5] = {1,4};
    m[6] = {2,4};
    m[7] = {1,2,4};
	solve();
    return 0;
}