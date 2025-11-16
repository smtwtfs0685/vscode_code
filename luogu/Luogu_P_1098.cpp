#include <iostream>
#include <cmath>
using namespace std;

int p1,p2,p3,i;
char s[10000],a,b,c,p,t;

int main(){
    cin >> p1 >> p2 >> p3 >> s;
    while(s[i]){
        a=s[i-1],b=s[i],c=s[i+1];
        if(b=='-' && a<c && (a>='0'&&c<='9' || a>='a'&&c<='z'))
        for(p3==1?p=a+1:p=c-1 ; p3==1?p<c:p>a ; p3==1?p++:p--){
            t=p;
            if(p1==2){
                t=(t>='a')?t-32:t;
            }
            else if(p1==3){
                t='*';
            }
            for(int j=0 ; j<p2 ; j++) cout << t ;
        }
        else cout << s[i] ;
        i++;
    }
    return 0;
}