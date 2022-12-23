#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;

int main() {
    stack<int> stk;
    int n; cin>>n;
    int x; cin>>x;
    for(km i=0;i<n;i++){
        stk.push(x);
    }
    // we can also push the element in the stack manually by push with the stack variable
    // stk.push(1);
    // stk.push(4);
    // stk.push(9);
    // stk.push(10);
    cout<<"the size of the stack is "<<stk.size()<<'\n';
    cout<<"the top element is "<<stk.top()<<'\n';
    stk.pop();
    cout<<"after poping thr first element size is "<<stk.size()<<'\n';
    // cout<<stk;
    
    return 0;
}
// written by mani
