// Program to print the first and last digit sum of number

#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;

int main() {
    km t; cin>>t; // testcases
    while(t--){
    km n,first,last;
    cin>>n;
    last=n%10;
    while(n>=10){
        n/=10;
    }
    first=n;
    cout<<last+first<<'\n';
    }
    return 0;
}
