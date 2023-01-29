#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(){
    string v;
    cin >> v;

    for(auto i = v.rbegin(); i != v.rend(); i++){
        if(*i == 'a'){
            cout << v.size()-(i-v.rbegin()) << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
}

int main() {
	solve();
    return 0;
}