#include <iostream>
using namespace std;

char m[12][12];
int f[3],c[3],t,ans;
bool zsz[160000];

void move(int x,int y,int d,int s){
    if(d==0){
        if(m[x-1][y]=='*') if(s==0) f[3]=1; else c[3]=1;
        else if(s==0) f[1]--; else c[1]--;
    }
    else if(d==1){
        if(m[x][y+1]=='*') if(s==0) f[3]=2; else c[3]=2;
        else if(s==0) f[2]++; else c[2]++;
    }
    else if(d==2){
        if(m[x+1][y]=='*') if(s==0) f[3]=3; else c[3]=3;
        else if(s==0) f[1]++; else c[1]++;
    }
    else if(d==3){
        if(m[x][y-1]=='*') if(s==0) f[3]=0; else c[3]=0;
        else if(s==0) f[2]--; else c[2]--;
    }
}

bool dm(){
    return !(f[1]==c[1] && f[2]==c[2]);
}

int main(){
    for(int i=0;i<=11;i++) m[i][0]='*',m[i][11]='*';
	for(int i=0;i<=11;i++) m[0][i]='*',m[11][i]='*';
    for(int i=1 ; i<=10 ; i++){
        for(int j=1 ; j<=10 ; j++){
            cin >> m[i][j] ;
            if(m[i][j]=='F') f[1]=i,f[2]=j;
            if(m[i][j]=='C') c[1]=i,c[2]=j;
        }
    }
    while(dm()){
        t=f[1]+f[2]*10+c[1]*100+c[2]*1000+f[3]*10000+c[3]*20000;
        if(zsz[t]){
            cout << 0 << endl ;
            return 0;
        }
        zsz[t]=1;
        move(f[1],f[2],f[3],0);
        move(c[1],c[2],c[3],1);
        ans++;
    }
    cout << ans << endl ;
    return 0;
}