#include <iostream>
#include <cmath>
using namespace std;

const int N=1e4+10;
int a,i;
long long s;

int main(){
    while(cin >> a){
        s+=a;
        i++;
    }
    s*=pow(2,i-1);
    cout << s << endl ;
    return 0;
}