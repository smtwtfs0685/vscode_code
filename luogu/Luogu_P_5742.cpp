#include <iostream>
using namespace std;

struct node{
    int id;
    double a,b,c;
}a[1010];

int main(){
    int n;
    cin >> n ;
    for(int i=1 ; i<=n ; i++){
        cin >> a[i].id >> a[i].a >> a[i].b ;
        a[i].c = a[i].a*7 + a[i].b*3 ;
    }
    for(int i=1 ; i<=n ; i++){
        if(a[i].a+a[i].b>140 && a[i].c>=800) cout << "Excellent" << endl ;
        else cout << "Not excellent" << endl ;
    }
    return 0;
}