#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(){
    
    long long a,b,c,k;
    cin >> a >> b >> c >> k;

    long long ans = 0;

    if(a >= k ){
        ans += k;
    } 

    else if(a+b >= k){
        ans += a;
    }

    else{
        ans += a-(k-a-b);
    }

    cout << ans << endl;

}


int main() {
	solve();
    return 0;
}