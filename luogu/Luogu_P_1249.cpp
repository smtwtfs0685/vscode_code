 #include <iostream>
 using namespace std;

 const int N=1e5;
 int n,s[N],a[N],sum,cnt,l=1;

void sdd(int x){
    for(int i=1 ; i<=l ; i++) s[i] *= x ;
    for(int i=1 ; i<=l ; i++){
        s[i+1] += s[i] / 10 ;
        s[i] %= 10 ;
    }
    while(s[l+1] > 0){
        l++ ;
        s[l+1] += s[l] / 10 ;
        s[l] %= 10 ;
    }
}

 int main(){
    cin >> n ;

    if(n == 3){
        cout << 3 << endl ;
        cout << 3 << endl ;
        return 0;
    }

    if(n == 4){
        cout << 4 << endl ;
        cout << 4 << endl ;
        return 0;
    }

    for(int i=2 ; sum<=n ; sum+=i, i++){
        a[++cnt] = i ;
    }

    s[0] = 1 , s[1] = 1 ;

    if(sum > n+1){
        a[sum-n-1] = 0 ;
    }
    else if(sum == n+1){
        a[cnt]++ ;
        a[1] = 0 ;
    }

    for(int i=1 ; i<=cnt ; i++){
        if(a[i]){
            cout << a[i] << " " ;
            sdd(a[i]) ;
        }
    }
    cout << endl ;

    for(int i=l ; i>=1 ; i--){
        cout << s[i] ;
    }
    return 0;
 }