// REVERSING A STRING
#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;

int main() {
    string str; cin>>str;
    km z=str.length();
    for(km i=0;i<z/2;i++){
        // the key code to swap the letter ans then will be reversed
        swap(str[i],str[z-i-1]);
    }
    cout<<str;
    return 0;
}
