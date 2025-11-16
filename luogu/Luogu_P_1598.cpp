#include <iostream>
using namespace std;

int ff[26],maxx;

int main(){
    string s;
    for(int i=0 ; i<4 ; i++){
        getline(cin,s);
        int n=s.size();
        for(int j=0 ; j<n ; j++){
            if(s[j]>='A' && s[j]<='Z'){
                ff[s[j]-'A']++;
            }
        }
    }
    for(int i=0 ; i<26 ; i++){
        maxx=max(maxx,ff[i]);
    }
    for(int i=0 ; i<maxx ; i++){
        for(int j=0 ; j<26 ; j++){
            if(maxx-ff[j]>0){
                cout << "  " ;
                ff[j]++;
            }
            else{
                cout << "* " ;
            }
        }
        cout << endl ;
    }
    char t='A';
    for(int i=0 ; i<26 ; i++){
        if(i>0) cout << " " ;
        cout << t ;
        t++;
    }
    return 0;
}