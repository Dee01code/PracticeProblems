#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
void solve(){
    int n = 26;
    string s = "";
    while(n--){
        int temp;
        cin >> temp;
        s.push_back('a'+temp-1);
    }
    cout << s << endl;
}
int main() {
	// Your code here
    solve();
    return 0;
}
