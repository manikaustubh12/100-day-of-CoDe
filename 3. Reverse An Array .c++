// Reverse an Array
#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;

int main() {
	//code
	km t; cin>>t;
	while(t--){
	    km n; cin>>n;
	    vector<km> v(n);
	    for(km i=0;i<n;i++){
	        cin>>v[i];
	    }
	    for(km i=n-1;i>=0;i--){
	        cout<<v[i]<<" ";
	    }
	    cout<<'\n';
	}
	return 0;
}
