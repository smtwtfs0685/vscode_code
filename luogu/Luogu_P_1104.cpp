#include <iostream>
#include <algorithm>
using namespace std;

struct nn{
    string name ;
    int a,b,c,id ;
}t[1000] ;

int cmp(nn a, nn b){
    if(a.a != b.a){
        return a.a < b.a ;
    }
    else{
        if(a.b != b.b){
            return a.b < b.b ;
        }
        else{
            if(a.c != b.c){
                return a.c < b.c ;
            }
            else{
                if(a.id != b.id) return a.id > b.id ;
            }
        }
    }
}

int main(){
    int n ;
    cin >> n ;
    for(int i=1 ; i<=n ; i++){
        cin >> t[i].name >> t[i].a >> t[i].b >> t[i].c ;
        t[i].id = i ;
    }
    sort(t+1, t+1+n ,cmp) ;
    for(int i=1 ; i<=n ; i++) cout << t[i].name << endl ;
    return 0;
}