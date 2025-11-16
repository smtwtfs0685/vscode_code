#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

set<int> q;
set<int> :: iterator k,a;
int n,ans;

int main(){
    cin >> n ;
    q.insert(1e6+10);
    q.insert(-1e6-10);
    for(int i=1 ; i<=n ; i++){
        int x ;
        cin >> x ;
        if(q.size() == 2){
            ans += x ; 
            q.insert(x) ;
        }
        else{
            k = q.lower_bound(x) ;
            if(*k != x){
                a = k ;
                a -- ;
                ans += min(abs(*a - x) , abs(x - *k)) ;
                q.insert(x) ;
            }
        }
    }
    cout << ans << endl ;
    return 0 ;
}