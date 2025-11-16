#include <iostream>
#include <list>
using namespace std ;
using Iter = list<int> :: iterator ;

const int N=1e5+10;
Iter qos[N];
list<int> quelist;
bool ans[N];
int n;

void buildlist(){
    quelist.push_back(1) ;
    qos[1] = quelist.begin() ;

    for(int i=2 ; i<=n ; i++){
        int k,p;
        cin >> k >> p ;
        if(p == 0){
            qos[i] = quelist.insert(qos[k] , i) ;
        }
        else if(p == 1){
            auto nextqos = next(qos[k]) ;
            qos[i] = quelist.insert(nextqos , i) ;
        }
    }
    int m ;
    cin >> m ;
    for(int i=1 ; i<=m ; i++){
        int x ;
        cin >> x ;
        if(!ans[x]){
            quelist.erase(qos[x]) ;
        }
        ans[x] = true ;
    }
}

int main(){
    cin >> n ;
    buildlist();
    bool f = true ;
    for(int x : quelist){
        if(!f) cout << " " ;
        f = false ;
        cout << x ;
    }
    return 0 ;
}