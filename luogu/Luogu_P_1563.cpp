#include <iostream>
#include <vector>
using namespace std;

const int N=1e4;
string ans;
int a,b,cnt=0;

int main(){
    int n,i ;
    cin >> n >> i ;
    vector <string> s(n) ;
    vector <int> m(n) ;
    for(int j=0 ; j<n ; j++){
        cin >> m[j] >> s[j] ;
    }
    for(int j=0 ; j<i ; j++){
        cin >> a >> b ;
        if(m[cnt]==a)
            cnt = (cnt-b+n)%n ;
        else
            cnt = (cnt+b)%n ;
    }
    cout << s[cnt] << endl ;
    return 0;
}