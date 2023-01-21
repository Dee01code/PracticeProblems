// Problem Link : https://my.newtonschool.co/playground/code/lcglu8uo0b72

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int solve()
{
    int N,K;
    cin >> N >>K;
    // If K is even
    if (K % 2 == 0) {
        long long int x = N / K;
        long long int y = (N + (K / 2)) / K;
 
        cout <<  x * x * x + y * y * y << endl;
    }
 
    // Otherwise
    else {
        long long int x = N / K;
        cout << x * x * x << endl;
    }
}

int main() {
	solve();
    return 0;
}
