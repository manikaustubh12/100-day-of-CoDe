class Solution {
public:
    long long reverse(long long x) {
        long long z=INT_MIN;
        long long q=INT_MAX;
        long long a,sum=0,b;
        while(x!=0){
            a=x%10;
            // int sum
            // sum+=
            if(sum<(z/10)|| sum>(q/10))
            return 0;
            sum=(sum*10)+a;
            x/=10;

        }
        return sum;
    }
};
