#include <iostream>
using namespace std;

struct node{
    char name[20];
    int a,s;
}a[1010];

int main(){
    int n ;
    cin >> n ;
    for(int i=1 ; i<=n ; i++){
        cin >> a[i].name >> a[i].a >> a[i].s ;
    }
    for(int i=1 ; i<=n ; i++){
        a[i].a = a[i].a+1 ;
        if(a[i].s*1.2>600) a[i].s=600;
        else a[i].s = a[i].s*1.2;
        cout << a[i].name << " " << a[i].a << " " << a[i].s << endl ;
    }
    return 0;
}