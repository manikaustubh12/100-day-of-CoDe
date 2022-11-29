// Square star pattern
#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;

int main() {
    km n; cin>>n;
    for(km i=1;i<=n;i++){
        for(km i=n;i>=1;i--){
        cout<<"*"<<" ";}
        cout<<"\n";
    }
    // for(km i=n;i>1;i--){
    //     cout<<"*"<<'\n';
    // }
    return 0;
}

//written by mani
