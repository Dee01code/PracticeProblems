#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(){
    
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    if(b >= c*d) {
        cout << -1 << endl;
        return;
    }

    if(a%(c*d-b) == 0){
        cout << a/(c*d-b) << endl;
        return;
    }

    else{
        cout << a/(c*d-b)+1<<endl;
    }

}


int main() {
	solve();
    return 0;
}