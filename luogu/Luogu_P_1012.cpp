#include <iostream>
#include <algorithm>
using namespace std;

const int N=1e5;
int n;
string s[N];

bool cmp(string a, string b){
    return a+b > b+a ;
}

int main(){
    cin >> n ;
    for(int i=1 ; i<=n ; i++) cin >> s[i] ;
    sort(s+1, s+1+n, cmp) ;
    for(int i=1 ; i<=n ; i++) cout << s[i] ;
    return 0;
}