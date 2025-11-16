#include <iostream>
using namespace std;

char a,b;
int n[3];

int main(){
    while(scanf("%c:=%c;",&a,&b)==2){
        if(a<'a' || a>'c') continue ;

        if(b>='0' && b<='9'){
            n[a-'a'] = b-'0';
        }
        else if(b>='a' && b<='c'){
            n[a-'a'] = n[b-'a'] ;
        }
    }
    cout << n[0] << " " << n[1] << " " << n[2] << endl ;
    return 0;
}