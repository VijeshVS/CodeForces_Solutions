#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   int n;
   string s;

   cin>>n;
   cin>>s;
    int st = -1;
    int e = -1;
   for(int i = 0;i<n;i++){
        if(s[i] == 'B'){
            st = i;
            break;
        }
   }

   for(int i = n-1;i>=0;i--){
        if(s[i] == 'B'){
            e = i;
            break;
        }
   }

   if(st == -1 && e == -1)
    cout<<0<<endl;
    else if((st == -1 && e!=-1) || (st !=-1 && e==-1) ){
        cout<<1<<endl;
    }
    else{
        cout<<e-st+1<<endl;
    }
}

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}