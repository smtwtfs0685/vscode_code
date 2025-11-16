#include <iostream>
#include <algorithm>
using namespace std;

const int N=5050;
int n,m,cnt,sum;
struct nn{
    int k;
    int s;
}a[N];

int cmp(nn a, nn b){
    if(a.s == b.s) return a.k < b.k ;
    else return a.s > b.s ;
}

int main(){
    cin >> n >> m ;
    for(int i=0 ; i<n ; i++){
        cin >> a[i].k >> a[i].s ;
    }
    sort(a, a+n, cmp) ;
    cnt = int(m*1.5) ;
    cout << a[cnt - 1].s << " " ;
    for(int i=0 ; i<n ; i++){
        if(a[i].s >= a[cnt - 1].s){
            sum ++ ;
        }
    }
    cout << sum << endl ;
    for(int i=0 ; i<sum ; i++){
        cout << a[i].k << " " << a[i].s << endl ;
    }
    return 0;
}