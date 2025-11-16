#include <iostream>
#include <stack>
using namespace std;

stack<int> ans;
string s;
int a,b,i,j;

int main(){
    cin >> s ;
    for(int k=0 ; k<s.size() ; k++){
        if(s[k] == '@') break ;
        else if(s[k] == '.'){
            ans.push(a);
            a=0, b=0 ;
        }
        else if(s[k] <= '9' && s[k] >= '0'){
            a = b*10 + (s[k] - '0') ;
            b = a ;
        }
        else{
            if(s[k] == '+') i = ans.top(), ans.pop(), j = ans.top(), ans.pop(), ans.push(i+j) ;
            if(s[k] == '-') i = ans.top(), ans.pop(), j = ans.top(), ans.pop(), ans.push(j-i) ;
            if(s[k] == '*') i = ans.top(), ans.pop(), j = ans.top(), ans.pop(), ans.push(i*j) ;
            if(s[k] == '/') i = ans.top(), ans.pop(), j = ans.top(), ans.pop(), ans.push(j/i) ;
        }
    }
    cout << ans.top() << endl ;
    return 0 ;
}