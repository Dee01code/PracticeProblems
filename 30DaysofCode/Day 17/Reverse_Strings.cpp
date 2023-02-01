#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(){
    string s;
    int l,r;
    cin >> l >> r;
    cin >> s;
    int i = l-1;
    int j = r-1;
    while(i<=j){
        swap(s[i++],s[j--]);
    }
    cout << s << endl;
    return;
}

int main() {
	solve();
    return 0;
}
