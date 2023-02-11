#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(){
    long long int n,k;
    cin >> n >> k;

    while(k--){
        // cout << "K is " << k << " and n is "<< n <<" "<<endl;
        if(n%200 == 0) n /= 200;
        else{
            n *= 1000;
            n += 200;
        }

    }
    cout << n << endl;

}

int main() {
	solve();
    return 0;
}