// Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c

class Solution {
public:
    bool judgeSquareSum(int c) {
        long long end=sqrt(c);
        long long start=0;
        
        while(start<=end){
            long long sum=(start*start)+(end*end);
            if(sum==c)
                return true;
            else if(sum<c){
                start++;
            }else{
                end--;
            }
        }
        return false;
    }
};
