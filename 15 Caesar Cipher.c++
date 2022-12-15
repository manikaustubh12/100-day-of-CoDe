#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;

int main() {
    string str,res=""; cin>>str;
    km n=3;
    km z=str.length();
    for(km i=0;i<z;i++) {
        if (isupper(str[i]))
            res+=char(int(str[i]+n-65)%26+65);
        else
            res+=char(int(str[i]+n-97)%26+97);
    }
    cout<<result;
    return 0;
}

// written by mani
