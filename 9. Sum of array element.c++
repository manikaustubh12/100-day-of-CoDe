//SUM OF ARRAY ELEMENT
#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;

int main() {
    km n; cin>>n;
    // while(n--){
        vector<km> v(n);
        km sum=0;
        for(km i=0;i<n;i++){
            cin>>v[i];
            sum=sum+v[i];
        }
    // }
    cout<<sum;
    return 0;
}
// code by mani
