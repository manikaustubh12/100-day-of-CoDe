#include<bits/stdc++.h>
typedef long long km;
using namespace std;

int main(){
   // write your code here
   km t; cin>>t;
   while(t--){
   string str; cin>>str;
   
  km n=str.length();
  for(km i=0;i<n;i++){
      str[i]=toupper(str[i]);
  }
  string str1=str;
  reverse(str.begin(),str.end());
  if(str==str1) cout<<"Yes"<<'\n';
  else cout<<"No"<<'\n';
    // toupper(str);
    // cout<<str<<'\n';
   }
    return 0;
}
