#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

char s[30][20]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty","a","both","another","first","second","third"};
int a[30] = {0,1,4,9,16,25,36,49,64,81,0,21,44,69,96,25,56,89,24,61,0,1,4,1,1,4,9};
char q[100];
int n,ans[100],t,cnt;

int main(){
    for(int i=1 ; i<=6 ; i++){
        cin >> q ;
        for(int j=1 ; j<=26 ; j++){
            if(!strcmp(q,s[j])){
                ans[++t] = a[j] ;
                break ;
            }
        }
    }
    sort(ans+1,ans+t+1);
    for(int i=1 ; i<=t ; i++){
        if(cnt){
            printf("%.2d",ans[i]);
        }
        else{
            if(a[i]){
                printf("%d",ans[i]);
                cnt=1;
            }
        }
    }
    if(!cnt) cout << 0 ;
    return 0;
}