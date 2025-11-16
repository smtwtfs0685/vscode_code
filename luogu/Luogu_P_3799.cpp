#include <iostream>
#define ll long long
using namespace std;

const ll N=1e5,mod=1e9+7;
ll n,a,Max=-1,Min=N,num[N],ans;

int main(){
    cin >> n ;
    for(int i=1 ; i<=n ; i++){
        cin >> a ;
        num[a] ++ ;
        Max = max(Max, a) ;
        Min = min(Min, a) ;
    }

    for(int i=Min+1 ; i<=Max ; i++){
        if(num[i] >= 2){
            for(int j=Min ; j<=i/2 ; j++){
                if(j != i-j){
                    ans = (ans + num[i]*(num[i]-1) * num[j]*num[i-j]/2) % mod ;
                }
                else if(num[j] >= 2 && j*2 == i){
                    ans = (ans + num[i]*(num[i]-1)/2 * num[j]*(num[j]-1)/2) % mod ;
                }
            }
            ans %= mod ;
        }
    }
    cout << ans << endl ;
    return 0;
}