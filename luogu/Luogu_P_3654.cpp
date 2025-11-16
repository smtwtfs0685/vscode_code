#include <iostream>
using namespace std;

int n,m,r,ans;
int dx[2]={1,0},dy[2]={0,1};
char map[110][110];

void dfs(int x, int y, int i, int j){
    if(j > r){
        ans ++ ;
        return ;
    }

    if(map[x][y] !='.' || x<0 || y<0 || x>=n || y>=m) return ;

    dfs(x+dx[i], y+dy[i], i, j+1) ;
    return ;
}

int main(){
    cin >> n >> m >> r ;
    for(int i=0 ; i<n ; i++) cin >> map[i] ;

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(map[i][j] == '.'){
                for(int k=0 ; k<2 ; k++){
                    dfs(i, j, k, 1) ;
                }
            }
        }
    }
    if(r == 1) ans /= 2 ;
    cout << ans << endl ;
    return 0 ;
}