// 7. Finding the max & min element in the array
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
    km max=0,min=v[0];
    
    // finding max element in the array
    for(km i=0;i<n;i++){
        if(v[i]>max){
            max=v[i];
        }   
    }
    cout<<"Max element is .... "<< max<<'\n';
    
    // finding the min element in the array
    for(km i=0;i<n;i++){
        if(v[i]<min){
            min=v[i];
        }   
    }
    cout<<"Min element is .... "<<min<<'\n';
    return 0;
}
