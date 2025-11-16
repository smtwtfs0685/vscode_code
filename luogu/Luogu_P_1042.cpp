#include <iostream>
#include <cmath>
using namespace std;

const int N=1e6;
long long a,b,c,d,cnt;

int main(){
    string t,s;
    getline(cin,s);
    while(getline(cin,t)) s+=t;
    long long n=s.size();
    for(int i=0 ; i<n ; i++){
        if(s[i]=='W') a++;
        else if(s[i]=='L') b++;
        else if(s[i]=='E'){
            if(i==1) cout << "0:0" << endl ;
            break;
        }

        if(abs(a-b)>=2 && (a>=11 || b>=11)){
            cout << a << ":" << b << endl ;
            a=0,b=0;
        }
        c=a,d=b;
    }
    cout << c << ":" << d << endl ;
    cout << endl ;
    a=0,b=0;
    for(int i=0 ; i<n ; i++){
        if(s[i]=='W') a++;
        else if(s[i]=='L') b++;
        else if(s[i]=='E'){
            if(i==1) cout << "0:0" << endl ;
            break;
        }

        if(abs(a-b)>=2 && (a>=21 || b>=21)){
            cout << a << ":" << b << endl ;
            a=0,b=0;
        }
        c=a,d=b;
    }
    cout << c << ":" << d << endl ;
    return 0;
}