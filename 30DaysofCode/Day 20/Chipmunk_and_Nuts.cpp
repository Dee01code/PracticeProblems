#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(){
    int n;
    int ans = 0;
    cin >> n;
    while(n--){
        int temp;
        cin >> temp;
        if(temp > 10) ans += temp-10;
    }
    cout << ans << endl; 
}

int main() {
    solve();
    return 0;
}