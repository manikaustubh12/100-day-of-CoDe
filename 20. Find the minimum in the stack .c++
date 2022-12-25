#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;

km minOf(stack<km> stk){
    km mini=INT_MAX;
    while(!stk.empty()){
        if(stk.top()<mini)
            mini=stk.top();
        stk.pop();
    }
    return mini;
}

int main()
{
    // cout<<"Hello World";
    km n; 
    cout<<"enter the no. of element u want to insert into the stack"<<'\n';
    cin>>n;
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
    cout<<"The minimum element in the stack is "<<'\n';
    cout<<maxOf(stk);
    return 0;
}
