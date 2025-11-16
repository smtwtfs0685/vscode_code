#include <iostream>
using namespace std;

long long zfx,cfx;

int main(){
    long long n,m;
    cin >> n >> m ;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(i == j) zfx += (n-i) * (m-j) ;
            else cfx += (n-i) * (m-j) ; 
        }
    }
    cout << zfx << " " << cfx << endl ;
    return 0;
}