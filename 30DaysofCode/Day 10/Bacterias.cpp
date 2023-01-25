#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(){
    double a,b,k;
    cin >> a >> b >> k;

    int ans = 0;
    if(a<b){
        ans = ceil(log(b/a)/log(k));
    }
    cout << ans << endl;
    return;
}

int main() {
	solve();
    return 0;
}
