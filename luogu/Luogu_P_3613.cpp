#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m ;
    vector<map<int,long long>> count(n+1);
    for(int i=1 ; i<=m ; i++){
        int t;
        cin >> t;
        if(t == 1){
            int id,cnt;
            long long k;
            cin >> id >> cnt >> k ;
            count[id][cnt] = k ;
        }
        else if(t == 2){
            int id,cnt;
            cin >> id >> cnt ;
            cout << count[id][cnt] << endl ;
        }
    }
    return 0 ;
}