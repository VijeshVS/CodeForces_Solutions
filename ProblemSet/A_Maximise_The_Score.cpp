    #include <iostream>
    #include <bits/stdc++.h>

    using namespace std;


    void solve(){
    int n;
    cin>>n;
        vector<int> a(2*n);

    for(int i = 0;i<2*n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());
        int score = 0;

    while(a.size()){
            int x = min(a[a.size()-1] ,a[a.size()-2]);
            score += x;
            a.pop_back();
            a.pop_back();
    }

    cout<<score<<endl;
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