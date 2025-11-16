#include <iostream>
using namespace std;

const int N=15;
int n;
char s[N][N],ans[N][N],old[N][N],now[N][N];

void r(){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            old[i][j] = s[i][j] ;
            now[i][j] = s[i][j] ;
        }
    }
}

bool check(){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(now[i][j]!=ans[i][j]){
                return false;
            }
        }
    }
    return true;
}

void a1(){
    for(int i=0,k=n-1 ; i<n ; i++,k--){
        for(int j=0 ; j<n ; j++){
            now[j][k] = old[i][j] ;
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            old[i][j] = now[i][j] ;
        }
    }
}

void a2(){
    a1();
    a1();
}

void a3(){
    a2();
    a1();
}

void a4(){
    for(int i=0 ; i<n ; i++){
        for(int j=0,k=n-1 ; j<=k ; j++,k--){
            now[i][j] = old[i][k] ;
            now[i][k] = old[i][j] ;
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            old[i][j] = now[i][j] ;
        }
    }
}

bool a5(){
    a4();
    a1();
    if(check()) return true;
    r();

    a4();
    a2();
    if(check()) return true;
    r();

    a4();
    a3();
    if(check()) return true;
    r();

    return false;
}

int main(){
    cin >> n ;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin >> s[i][j];
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin >> ans[i][j];
        }
    }
    r();
    
    a1();
    if(check()){
        cout << 1 ;
        return 0;
    }
    r();

    a2();
    if(check()){
        cout << 2 ;
        return 0;
    }
    r();

    a3();
    if(check()){
        cout << 3 ;
        return 0;
    }
    r();

    a4();
    if(check()){
        cout << 4 ;
        return 0;
    }
    r();

    if(a5()){
        cout << 5 ;
        return 0;
    }
    r();
    
    if(check()){
        cout << 6 ;
        return 0;
    }

    cout << 7 ;
    return 0;
}