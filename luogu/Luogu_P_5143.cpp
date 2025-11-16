#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const int N=1e5+10;
int n;
double sum;
struct nn{
    double x,y,z ;
}a[N];

double cmp(nn a, nn b){
    return a.z < b.z ;
}

int main(){
    cin >> n ;
    for(int i=1 ; i<=n ; i++) cin >> a[i].x >> a[i].y >> a[i].z ;
    sort(a+1, a+1+n , cmp) ;
    for(int i=1 ; i<n ; i++){
        sum += sqrt(pow(a[i].x - a[i + 1].x, 2) + pow(a[i].y - a[i + 1].y, 2) + pow(a[i].z - a[i + 1].z, 2)) ;
    }
    cout << fixed << setprecision(3) << sum << endl ;
    return 0;
}