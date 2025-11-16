#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

const int N=100;
double a[N],d[N][N],ans[N];


int main(){
    int n,m;
    cin >> n >> m;
    double s=0;

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin >> d[i][j] ;
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            a[j] = d[i][j] ;
        }
        sort(a,a+m);
        for(int j=1 ; j<m-1 ; j++){
            ans[i] += a[j] ;
        }
    }
    sort(ans,ans+n);
    s=ans[n-1]/(m-2);
 
    cout << fixed << setprecision(2) << s << endl ;
    return 0;
}