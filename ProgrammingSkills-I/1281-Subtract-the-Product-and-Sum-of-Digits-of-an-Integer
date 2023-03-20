class Solution {
public:
    int subtractProductAndSum(int n) {
        int mod, rem=0, multi=1;
        while(n>0){ // 234
         mod = n%10;
         rem += mod;
         multi = multi * (n%10);
         n/=10;
     }
     return multi-rem;
    }
};
