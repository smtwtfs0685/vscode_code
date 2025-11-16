#include <iostream>
using namespace std;

const int N=1e5;
int t,s[N];

int main(){
    cin >> t ;
    while(t--){
        int n,a,ans=0,ws=1;
        cin >> n >> a ;
        s[1] = 1 ;
        for(int i=2 ; i<=10000 ; i++) s[i] = 0 ;
        for(int i=2 ; i<=n ; i++){
            for(int j=1 ; j<=ws ; j++){
                s[j] *= i ;
            }
            for(int j=1 ; ; j++){
                s[j+1] += s[j] / 10 ;
                s[j] %= 10 ;
                if(j >= ws && s[j+1] == 0){
                    ws = j ;
                    break;
                }
            }
        }
        for(int i=1 ; i<=ws ; i++){
            if(s[i] == a) ans++;
        }
        cout << ans << endl ; 
    }
    return 0;
}