#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    int la=a.length(),lb=b.length();
    int ta=1,tb=1;
    for(int i=0 ; i<la ; i++){
        ta *= a[i]-'A'+1 ;
    }
    for(int i=0 ; i<lb ; i++){
        tb *= b[i]-'A'+1 ;
    }
    if(ta%47==tb%47) cout << "GO" << endl ;
    else cout << "STAY" << endl ;
    return 0;
}