#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    long long a,b,c,d;
    cin >> a >> b >> c >> d;

    long long ans,p1,p2,p3,p4;  
    p1 =  a*c;
    p2 = a*d;
    p3 = b*c;
    p4 = b*d;
    ans = max({p1,p2,p3,p4});

    cout << ans << endl;


}

int main(){
    solve();
    return 0;
}