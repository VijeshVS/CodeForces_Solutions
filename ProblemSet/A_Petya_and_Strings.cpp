#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   
}

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    string s1;
    string s2;

    cin>>s1>>s2;

    int i = 0;

    while(tolower(s1[i]) == tolower(s2[i]) && i<s1.length()){
        i++;
    }

    if(i == s1.length()){
        cout<<0<<endl;
        return 0;
    }

    if(tolower(s1[i]) > tolower(s2[i])){
        cout<<1<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }


}