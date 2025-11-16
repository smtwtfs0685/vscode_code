#include <iostream>
using namespace std ;

int main(){
    long long i, n;
    string s;
    cin >> s >> n ; 
    long long num = s.size() ;
    while(num < n){
        i = num ;
        while(n > i) i *= 2 ;
        i /= 2 ;
        n -= (i+1) ;
        if(n == 0) n = i ; 
    }
    cout << s[n-1] << endl ;
    return 0 ;
}
