#include <iostream>
using namespace std;

int cnt,x;
string s,p;

int main(){
    cin >> s;
    for(int i=0 ; i<s.length() ; i++){
        if(s[i]>='0' && s[i]<='9') cnt++;
        else{
            p=s[i];
            break;
        }
    }
    x=cnt;
    cnt--;
    while(s[cnt]=='0' && cnt>0) cnt--;
    for(int i=cnt ; i>=0 ; i--) cout << s[i] ;
    if(p=="0") return 0;
    else if(p=="%"){
        cout << p ;
        return 0;
    }
    else cout << p ;
    cnt=x+1;
    x=s.length()-1;
    while(s[cnt]=='0' && cnt<s.length()-1) cnt++;
    while(s[x]=='0' && x>cnt) x--;
    for(int i=x ; i>=cnt ; i--){
        cout << s[i] ;
    }
    return 0;
}