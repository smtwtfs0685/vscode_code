#include <iostream>
#include <algorithm>
using namespace std;

int n;
struct node{
    string name;
    string zw,xzw;
    long long sum;
    int cnt;
    int h;
}a[1001];

int cmp1(node a, node b){
    if(a.sum == b.sum) return a.h < b.h;
    else return a.sum > b.sum;
}

int change(string a){
	if (a == "BangZhu") return 0;
	if (a == "FuBangZhu") return 1;
	if (a == "HuFa") return 2;
	if (a == "ZhangLao") return 3;
	if (a == "TangZhu") return 4;
	if (a == "JingYing") return 5;
	if (a == "BangZhong") return 6;
}

int cmp2(node a, node b){
    if(change(a.xzw) == change(b.xzw)){
        if(a.cnt == b.cnt) return a.h < b.h ;
        else return a.cnt > b.cnt ;
    } 
    return change(a.xzw) < change(b.xzw) ;
}

int main(){
    cin >> n ;
    for(int i=1 ; i<=n ; i++){
        cin >> a[i].name >> a[i].zw >> a[i].sum >> a[i].cnt ;
        a[i].h = i ;
    }

    sort(a+4, a+n+1, cmp1);

    for(int i=1 ; i<=n ; i++){
        if(i==1) a[i].xzw = "BangZhu" ;
        else if(i==2 || i==3) a[i].xzw = "FuBangZhu" ;
        else if(i==4 || i==5) a[i].xzw = "HuFa" ;
        else if(i>=6 && i<=9) a[i].xzw = "ZhangLao" ;
        else if(i>=10 && i<=16) a[i].xzw = "TangZhu" ;
        else if(i>=17 && i<=41) a[i].xzw = "JingYing" ;
        else a[i].xzw = "BangZhong" ;
    }

    sort(a+1, a+n+1, cmp2);

    for(int i=1 ; i<=n ; i++){
        cout << a[i].name << " " << a[i].xzw << " " << a[i].cnt << endl ;
    }
    return 0;
}