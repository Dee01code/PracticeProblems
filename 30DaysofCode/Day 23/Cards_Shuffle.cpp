#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(){
    int n;
    cin >> n;
    int xorr = 0;
    for(int i=1; i<4*n; i++){
        int temp;
        cin >> temp;
        xorr ^= temp;
    }
    cout << xorr << endl;
}

int main() {
	solve();
    return 0;
}
