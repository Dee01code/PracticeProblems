#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(){

    int n;
    cin >> n;

    bool ans = 0;
    for(int i = 1; i <10; i++){
        if(n%i==0 && (n/i)>0 && (n/i)<10){
            ans = 1;
            break;
        }
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;

}


int main() {
	solve();
    return 0;
}