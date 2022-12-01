#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
typedef long long km;
using namespace std;

int main() {
    string str; cin>>str;
    string s; cin>>s;
    // reverse(str.begin(),str.end());
    // cout<<str;
    // if(str)
    reverse(s.begin(),s.end());
    if(str==s) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    return 0;
}

// written by mani
