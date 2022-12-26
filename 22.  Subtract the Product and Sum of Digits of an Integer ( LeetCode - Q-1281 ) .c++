class Solution {
public:
    int subtractProductAndSum(int n) {
        int z,x=0,c=1,v;
        while(n!=0){
            z=n%10;
            x+=z;
            c=c*z;
            n/=10;
        }
        // v=c-x;
        // return v
        return c-x;
    }
};


