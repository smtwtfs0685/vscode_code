#include <bits/stdc++.h>
using namespace std ;

string digui(){
    int k;
    string s,str;
    char ch;
    while(cin >> ch){
        if(ch == '['){
            cin >> k ;
            str = digui() ;
            while(k--) s += str ;
        }
        else if(ch == ']'){
            return s ;
        }
        else{
            s += ch ;
        }
    }
    return s;
}

int main(){
    cout << digui() ;
    return 0 ;
}