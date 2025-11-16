#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct node{
    string name;
    int a,b,c,sum;
}a[1010];

bool cmp(node a,node b){
    if(abs(a.a-b.a)<=5 && abs(a.b-b.b)<=5 && abs(a.c-b.c)<=5 && abs(a.sum-b.sum)<=10){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    for(int i=1 ; i<=n ; i++) {
        cin >> a[i].name >> a[i].a >> a[i].b >> a[i].c ;
        a[i].sum = a[i].a+a[i].b+a[i].c ;
    }
    for(int i=1 ; i<=n ; i++){
        for(int j=i+1 ; j<=n ; j++){
            if(cmp(a[i],a[j])) cout << a[i].name << " " << a[j].name << endl ;
        }
    }
    return 0;
}