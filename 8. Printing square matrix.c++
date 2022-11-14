// printing the square matrix
#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;

int main() {
    km n; 
    cout<<"Enter the size of square matriix";
    cin>>n;
    // now initialize the dynamic vector to store the matrix element
    vector<vector<km>> v(n,vector<km>(n));
    for(km i=0;i<n;i++){
        for(km j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    // to print the matrix element
    cout<<"The matrix element are ....\n";
    for(km i=0;i<n;i++){
        for(km j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}

// written by mani
