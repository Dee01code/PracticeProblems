// Problem Link: https://my.newtonschool.co/playground/code/0vb6uf9tra6m

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(){
    int n;
    cin >> n;
    int evenCnt = n/2;
    int oddCnt = n-evenCnt;
    int ans = evenCnt*oddCnt;
    cout << ans << endl;
}

int main() {
	solve();
    return 0;
}
