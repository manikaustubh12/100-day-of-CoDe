#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;
int main() {
	// your code goes here
	km t; cin>>t;
	bool f=false;
	while(t--){
	   string str; cin>>str;
	   km n=str.length();
	   bool f=false;
	   for(km i=0;i<n;i++){
	       if(str[i]=='7'){
	           f=true;
	           break;
	       }
	   }
	   if(f) cout<<"YES"<<'\n';
	   else cout<<"NO"<<'\n';
	}
	return 0;
}
