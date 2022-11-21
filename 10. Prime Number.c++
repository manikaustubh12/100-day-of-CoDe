// checking a given number is prime or not
#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;

int main() {
    km n; cin>>n;
    km count=0;
    for(km i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2) cout<<"Prime"<<'\n';
        else cout<<"Not Prime"<<'\n';
    return 0;
}
