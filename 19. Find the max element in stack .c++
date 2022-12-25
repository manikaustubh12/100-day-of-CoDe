#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;

km maxOf(stack<km> stk){
    km mx=INT_MIN;
    while(!stk.empty()){
        if(stk.top()>mx)
            mx=stk.top();
        stk.pop();
    }
    return mx;
}

int main()
{
    // cout<<"Hello World";
    km n; cin>>n;
    stack<km> stk;
    // push the element using for loop
    for(km i=0;i<n;i++){
        km x; cin>>x;
        stk.push(x);
    }
    // or insert the element using manually
    // stk.push(2);
    // stk.push(5);
    // stk.push(8);
    // stk.push(-1);
    cout<<maxOf(stk);
    return 0;
}
