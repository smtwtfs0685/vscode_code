#include <iostream>
using namespace std;

int jc(int n){
    if(n==0) return 1;
    return jc(n-1)*n ;
}

int main(){
    int n;
    cin >> n ;
    cout << jc(n) << endl ;
    return 0 ;
}