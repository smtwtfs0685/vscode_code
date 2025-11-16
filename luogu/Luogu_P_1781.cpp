#include <iostream>
#include <algorithm>
using namespace std;

int n;
struct nn{
    string s;
    int id;
}a[110];

int cmp(nn a, nn b){
    if(a.s.size() == b.s.size()) return a.s > b.s ;
    else return a.s.size() > b.s.size() ;
}

int main(){
    cin >> n ;
    for(int i=1 ; i<=n ; i++){
        cin >> a[i].s;
        a[i].id = i ;
    }
    sort(a+1,a+1+n,cmp);
    cout << a[1].id << endl << a[1].s << endl ;
    return 0;
}