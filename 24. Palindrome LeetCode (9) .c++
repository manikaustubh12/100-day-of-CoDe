class Solution {
public:
    bool isPalindrome(long long x) {
        long long  rev=0;
        long long  z=x;
        if(x<0) x=x*-1;
        while(x!=0){
            rev=(rev*10) + (x%10);
            x/=10;
        }
        if(z==rev) return true;
        return false;
    }
};
