class Solution {
public:
    long long mySqrt(int x) {
        
        int low =1, high = x;
        if(x==0) return 0;
        long long p_ans = 0;
        while(low <= high)
        {
            long long mid = low + (high - low)/2;
            if(mid * mid == x) return mid;
            else if(mid * mid > x)
                high = mid-1;
            else if(mid * mid < x){
                p_ans = max(mid,p_ans);
                low = mid+1;
            }   
        }
        
        return p_ans; 
        
        
    }
};

//