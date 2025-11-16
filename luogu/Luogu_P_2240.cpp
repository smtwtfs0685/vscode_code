#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std ;

struct node{
    int m,v;
}a[10100];
int n,t;
double ans;

bool cmp(node a, node b){
    return a.v*b.m > b.v*a.m ;
}

int main(){
    cin >> n >> t ;
    for(int i=0 ; i<n ; i++){
        cin >> a[i].m >> a[i].v ;
    }
    sort(a, a+n, cmp) ;
    for(int i=0 ; i<n ; i++){
        if(a[i].m <= t){
            ans += a[i].v ;
            t -= a[i].m ;
        }
        else{
            ans += a[i].v * (t*1.0) / (a[i].m*1.0) ;
            break ;
        }
    }
    cout << fixed << setprecision(2) << ans ;
    return 0 ;
}