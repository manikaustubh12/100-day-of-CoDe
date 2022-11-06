// Sort the array element in ascending order
#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;

int main() {
    km n; cin>>n;
    vector<km> v(n);
    for(km i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(km i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
