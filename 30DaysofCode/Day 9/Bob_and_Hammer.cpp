#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(){
    int x,y,z;
    cin >> x >> y >> z;
    int ans = 0;

    if(x>0){
        if(y>=0 && y<=x){
            if(z>=0 && z<=y){
                ans = x;
            }
            else if(z<0){
                ans = (0-z)*2+x;
            }
            else ans = -1;

        }
        else{
            ans = x;
        }
    }
    else if(x<0){
        if(y<=0 && y>=x){
            if(z<=0 && z>=y){
                ans = 0-x;
            }
            else if(z>0){
                ans = z*2-x;
            }
            else ans = -1;
        }
        else{
            ans = 0-x;
        }
    }
    cout << ans << endl;
    return;
}
int main() {
	solve();
    return 0;
}