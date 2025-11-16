#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double a1,a2,b1,b2,c1,c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2 ;
    cout << fixed << setprecision(2) << sqrt((a1-b1)*(a1-b1) + (a2-b2)*(a2-b2)) + sqrt((b1-c1)*(b1-c1) + (b2-c2)*(b2-c2)) + sqrt((a1-c1)*(a1-c1) + (a2-c2)*(a2-c2)) ;
    return 0;
}