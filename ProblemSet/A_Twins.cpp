#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
   
}

int sm(vector<int> a,int low,int high){
    int sum = 0;

    for(int i = low;i<=high;i++){
        sum += a[i];
    }

    return sum;
}

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;

    vector<int> a(n,0);

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end(),greater<int>());

    for(int i = 0;i<n;i++){
        int sum1 = sm(a,0,i);
        int sum2 = sm(a,i+1,n-1);

        if(sum1 > sum2){
            cout<<i+1<<endl;
            break;
        }
    }
}