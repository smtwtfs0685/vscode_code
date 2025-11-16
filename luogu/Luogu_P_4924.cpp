#include <iostream>
using namespace std;

const int N=500;
int n,m,s[N][N],ans[N][N],t=1;

int main(){
    cin >> n >> m;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ; j++){
            s[i][j]=t++;
        }
    }
    for(int i=1 ; i<=m ; i++) {
        int x,y,r,z;
        cin >> x >> y >> r >> z ;
        if(z==0){
            for(int i=x-r ; i<=x+r ; i++){
                for(int j=y-r ; j<=y+r ; j++){
                    ans[x-y+j][x+y-i]=s[i][j];
                }
            }
            for(int i=x-r ; i<=x+r ; i++){
                for(int j=y-r ; j<=y+r ; j++){
                    s[i][j]=ans[i][j];
                }
            }
        }
        else if(z==1){
            for(int i=x-r ; i<=x+r ; i++){
                for(int j=y-r ; j<=y+r ; j++){
                    ans[x+y-j][y-x+i]=s[i][j];
                }
            }
            for(int i=x-r ; i<=x+r ; i++){
                for(int j=y-r ; j<=y+r ; j++){
                    s[i][j]=ans[i][j];
                }
            }
        }
    }

    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ; j++){
            cout << s[i][j] << " " ;
        }
        cout << endl ;
    }
    return 0;
}