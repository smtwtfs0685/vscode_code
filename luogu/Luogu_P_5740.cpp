#include <iostream>
#include <algorithm>
using namespace std;
int n;

struct node{
    char name[20];
    int id,c,m,e;
}a[1010];

bool cmp(node a,node b){
    if(a.c+a.m+a.e == b.c+b.m+b.e)
        return a.id<b.id;
    return a.c+a.m+a.e > b.c+b.m+b.e ;
}

int main(){
    cin >> n ;
    for(int i=1 ; i<=n ; i++){
        scanf("%s%d%d%d",a[i].name,&a[i].c,&a[i].m,&a[i].e);
        a[i].id=i;
    }
    sort(a+1,a+1+n,cmp);
    printf("%s %d %d %d",a[1].name,a[1].c,a[1].m,a[1].e);
    return 0;
}