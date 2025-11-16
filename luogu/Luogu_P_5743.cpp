#include <iostream>
using namespace std;

int main(){
    int n,i=1;
    cin >> n ;
    while(n>1){
        n--;
        i = (i+1)*2;
    }
    cout << i << endl ;
    return 0;
}