#include <iostream>
using namespace std;

int n,a,b,x,y,p[220],q[220];
int k[5][5]={{0,0,1,1,0},
             {1,0,0,1,0},
             {0,1,0,0,1},
             {0,0,1,0,1},
             {1,1,0,0,0}};

int main(){
    cin >> n >> a >> b ;
    for(int i=0 ; i<a ; i++) cin >> p[i] ;
    for(int i=0 ; i<b ; i++) cin >> q[i] ;
    for(int i=0 ; i<n ; i++){
        x += k[p[i%a]][q[i%b]] ;
        y += k[q[i%b]][p[i%a]] ;
    }
    cout << x << " " << y << endl ;
    return 0;
}