#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

string solve(string s, long long int n){
    if(n==1){
        s = "2"+s;
        return s;
    }

    if(n%2==0){
        s = "0"+ s;
    } 
    if(n%2 == 1){
        s = "2" + s;
    }
    return solve(s,n/2);
}

int main() {
	long long int n;
    cin >> n;
    string s = "";
    string ans = solve(s,n);
    cout << ans << endl;
    return 0;
}