#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   
}

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    string s;
    cin>>s;

    string ans = "";

    for(auto i:s){
        char ch = tolower(i);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y'){

        }
        else
        {
            ans += '.';
            ans += ch;
        }
    }

    cout<<ans<<endl;
    
}