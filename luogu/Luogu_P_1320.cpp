#include <iostream>
#include <string>
using namespace std;

int n,t=1;
string a,b;

int main(){
    cin >> b;
    n=b.size();
    while(cin>>a){
        b+=a;
    }
    cout << n << " " ;
    if(b[0]!='0') cout << "0 " ;
    for(int i=1 ; i<n*n ; i++){
        if(b[i]==b[i-1]){
            t++;
        }
        else{
            cout << t << " " ;
            t=1;
        }
    }
    cout << t << endl ;
    return 0;
}