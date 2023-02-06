#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(){
    int n;
    string s;
    cin >> n >> s;

    for(int i = 0; i<s.size(); i++){
        s[i] = 'A' + ((s[i]-'A')+n)%26;
    }
}

int main() {
	solve();
    return 0;
}
