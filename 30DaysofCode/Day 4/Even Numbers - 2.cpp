// problem Link : https://my.newtonschool.co/playground/code/wyeo1t51axas

#include <iostream>
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    if(m%2 == 0){
        for(int i = 0; i<5; i++){
            m -= 2;
            cout << m << " ";
        }
        return;
    }
    else{
        m--;
        for(int i = 0; i<5; i++){
            m -= 2;
            cout << m << " ";
        }
        return;
    }
}

int main() {
    solve();
}
