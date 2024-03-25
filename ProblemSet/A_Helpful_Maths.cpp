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

    int i = 0;

    int ct1 = 0;
    int ct2 = 0;
    int ct3 = 0;

    while(i<s.length()){
        if(s[i] == '1')
            ct1++;
        else if(s[i] == '2')
            ct2++;
        else
            ct3++;

        i+=2;
    }

    string k = "";

    for(int i = 0;i<ct1;i++){
        k += '1';
        k += '+';
    }

    for(int i = 0;i<ct2;i++){
        k += '2';
        k += '+';
    }

    for(int i = 0;i<ct3;i++){
        k += '3';
        k += '+';
    }

    k.pop_back();
    cout<<k<<endl;
}