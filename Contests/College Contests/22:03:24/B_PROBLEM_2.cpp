#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   int n,k,x;

    cin>>n>>k>>x;

    if(x == 1 && k == 1 && n == 1){
        cout<<"NO"<<endl;
        return;
    }

    if(k == 1 && x == 1){
        cout<<"NO"<<endl;
        return;
    }

    if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i = 0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
    } 
    else{
        if(k == 2 && n % 2 != 0){
            cout<<"NO"<<endl;
            return;
        }    

        int div = n/2;

        if(n%2 == 0){
            cout<<"YES"<<endl;
            cout<<div<<endl;
            for(int i = 0;i<div;i++){
                cout<<2<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<div<<endl;
            div--;
            for(int i = 0;i<div;i++){
                cout<<2<<" ";
            }
            cout<<3<<endl;
        }
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