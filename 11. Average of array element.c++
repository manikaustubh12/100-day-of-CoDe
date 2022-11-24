// Average of the ARRAY element
#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;

int avg(int n){
    vector<km> v(n);
    km sum=0;
    for(km i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    float av=sum/n;
    return av;
}

int main() {
    km n; cin>>n;
    cout<<avg(n);
    return 0;
}

// written by mani
