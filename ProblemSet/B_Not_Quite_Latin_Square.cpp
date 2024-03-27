#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   vector<string> v(3);

   for(int i = 0;i<3;i++){
    cin>>v[i];
   }

   for(int i = 0;i<3;i++){
        map<char,int> mpp;
        mpp['A'] = 1;
        mpp['C'] = 1;
        mpp['B'] = 1;
        for(int j = 0;j<3;j++){
            char ch = v[i][j];
            if(ch!='?')
                mpp[ch]--;
        }
        
        if(mpp['A'] == 0 || mpp['B'] == 0 || mpp['C'] == 0){
            for(auto i :mpp){
                if(i.second == 1){
                    cout<<i.first<<endl;
                    return;
                }
            }
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