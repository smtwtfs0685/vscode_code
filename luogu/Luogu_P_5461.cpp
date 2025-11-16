#include <iostream>
using namespace std;

const int N=3000;
int n,a[N][N],o=1;

void dfs(int o,int x,int y){
    if(o==2){
        a[x][y]=0;
        return ;
    }

    for(int i=x ; i<=x+o/2-1 ; i++){
        for(int j=y ; j<=y+o/2-1 ; j++){
            a[i][j]=0;
        }
    }

    dfs(o/2,x+o/2,y);
    dfs(o/2,x+o/2,y+o/2);
    dfs(o/2,x,y+o/2);
}

int main(){
    cin >> n ;
    for(int i=1 ; i<=n ; i++){
        o*=2;
    }
    for(int i=1 ; i<=o ; i++){
        for(int j=1 ; j<=o ; j++){
            a[i][j]=1;
        }
    }
    dfs(o,1,1);
    for(int i=1 ; i<=o ; i++){
        for(int j=1 ; j<=o ; j++){
            cout << a[i][j] << " " ;
        }
        cout << endl ;
    }
    return 0;
}