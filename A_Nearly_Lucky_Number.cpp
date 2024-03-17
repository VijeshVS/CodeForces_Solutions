#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
 
void solve(){
    
}
 
int main(){
    long long n;
    cin>>n;
 
    int count = 0;
 
    while(n!=0){
        if(n%10 == 7 || n%10 == 4){
            count++;
        }
 
        n = n/10;
    }
 
    if(count == 4 || count == 7)
        cout<<"YES";
    else
        cout<<"NO";
}