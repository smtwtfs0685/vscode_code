#include <iostream>
using namespace std;

int n,m,list[5000],step[21],mac[21][1000010],las_time[21],ans;
struct information{
    int id;
    int cost;
}a[21][21];

int main(){
    cin >> m >> n ;
    for(int i=1 ; i<=n*m ; i++) cin >> list[i];
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=m ; j++){
            cin >> a[i][j].id ;
        }
    }
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=m ; j++){
            cin >> a[i][j].cost ;
        }
    }

    for(int i=1 ; i<=n*m ; i++){
        int now=list[i];
        step[now]++;
        int id=a[now][step[now]].id,cost=a[now][step[now]].cost;
        int s=0;
        for(int j=las_time[now]+1 ; ; j++){
            if(mac[id][j]==0){
                s++;
            }
            else{
                s=0;
            }

            if(s==cost){
                for(int k=j-cost+1 ; k<=j ; k++){
                    mac[id][k]=1;
                }
                if(ans<j) ans=j;
                las_time[now]=j;
                break;
            }
        }
    }
    cout << ans ;
    return 0;
}