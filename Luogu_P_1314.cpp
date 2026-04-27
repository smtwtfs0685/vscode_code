#include <bits/stdc++.h>
using namespace std;

int read(){
    int x = 0, sign = 1 ;
    int c = getchar() ;
    while(c != '-' && (c < '0' || c > '9')) c = getchar() ;
    if(c == '-') sign = -1, c = getchar() ;
    while(c <= '9' && c >= '0'){
        x = x * 10 + (c - '0') ;
        c = getchar() ;
    }
    return x * sign ;
}

struct range{
    int l, r ;
};

int n, m ;
string s ;
vector<int> w, v ;
vector<range> q ;
vector<long long> c, sv ;



int main(){
    n = (int)read() ;
    m = (int)read() ;
    s = read() ;

    w.assign(n + 1, 0) ;
    v.assign(n + 1, 0) ;
    q.assign(n + 1, {0, 0}) ;
    c.assign(n + 1, 0) ;
    sv.assign(n + 1, 0) ;

    int maxw = 0 ;
    for(int i = 1 ; i <= n ; i ++){
        w[i] = (int)read() ;
        v[i] = (int)read() ;
        maxw = max(maxw, w[i]) ;
    }

    for(int i = 1 ; i <= n ; i ++){
        q[i].l = (int)read() ;
        q[i].r = (int)read() ;
    }

    int l = 0, r = maxw + 1 ;
    __int128 ans = -1 ;
    __int128 S = (__int128)s ;

    while(l <= r){
        int mid = (l + r) >> 1 ;
    }

    return 0 ;
}