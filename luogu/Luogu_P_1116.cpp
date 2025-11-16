#include <iostream>
using namespace std;

const int N=1e6;
int n,s[N],cnt;

int main(){
    cin >> n ;
    for(int i=1 ; i<=n ; i++) cin >> s[i] ;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            if(s[j] > s[i]) cnt ++ ;
        }
    }
    cout << cnt << endl ;
    return 0;
}