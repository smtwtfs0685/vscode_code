#include <iostream>
using namespace std;

string add(string a,string b){
    int l1=a.size(),l2=b.size();
    int lx=max(l1,l2);
    while(a.size()<lx) a = '0' + a ;
    while(b.size()<lx) b = '0' + b ;
    string c="";
    int cnt=0;
    for(int i=lx-1 ; i>=0 ; i--){
        int s=0,t1=a[i]-'0',t2=b[i]-'0' ;
        s=t1+t2+cnt ;
        cnt=s/10;
        char ch=(s%10)+'0';
        c=ch+c;
    }
    if(cnt!=0) return '1'+c;
    return c;
}

int main(){
    string a,b ;
    cin >> a >> b ;
    cout << add(a,b) << endl ;
    return 0 ;
} 