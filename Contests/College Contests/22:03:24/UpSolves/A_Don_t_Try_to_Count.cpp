#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// bool isSubstring(string s,string sub){

//     for(int i = 0;i<s.size();i++){
//         string temp = "";
//         for(int j = i;j<s.size();j++){
//             temp += s[j];
//             if(temp == sub){
//                 return true;
//             }
//         }
//     }

//     return false;
// }

void solve(){
    int n,m;
    cin>>n>>m;

    string x,s;
    cin>>x>>s;
   
    int l = 6;
    int ans = 0;

    while(l--){
        if(x.find(s) != string::npos)
        {
            cout<<ans<<endl;
            return;
        }

        x += x;
        ans++;
    }

    cout<<-1<<endl;

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