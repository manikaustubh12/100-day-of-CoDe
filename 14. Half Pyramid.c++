#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;

int main()
{
    // cout<<"Hello World";
    km n; cin>>n;
    km i=1;
    while(i<=n){
        km j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<'\n';
        i++;
    }
    return 0;
}
// written by mani
