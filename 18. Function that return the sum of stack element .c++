// write a function that takes a stack of ints and returns sum of all element
#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;

long long sumOfElement(stack<int> stk){
    long long sum=0;
    while(!stk.empty()){
        sum+=stk.top();
        stk.pop();
    }
    return sum;
}
int main() {
    stack<int> stk;
    stk.push(2);
    stk.push(8);
    stk.push(6);
    cout<<"The sum of the stack element is .. "<<sumOfElement(stk);
    return 0;
}
// written by mani
