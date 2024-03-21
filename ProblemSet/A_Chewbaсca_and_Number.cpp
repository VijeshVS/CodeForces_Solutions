#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   
}

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    long long n;
    cin>>n;
    long long t=0; 

    int count = 0;

    while(n!=0){
        int digit = n % 10;
        int mini = min(9-digit,digit);
        if(mini == 0 && n/10 == 0){
            mini = digit;
        }
        t += mini*pow(10,count);
        n /= 10;
        count++;
    }

    cout<<t<<endl;
    
}