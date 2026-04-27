#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, h, v ;
    cin >> w >> h >> v ;

    for(int i = 0 ; i < h ; i ++){
        for(int j = 0 ; j < w ; j ++){
            cout << "Q" ;
        }
        cout << endl ;
    }

    for(int i = 0 ; i < w ; i ++){
        for(int j = 0 ; j < v + w ; j ++){
            cout << "Q" ;
        }
        cout << endl ;
    }

    return 0 ;
}