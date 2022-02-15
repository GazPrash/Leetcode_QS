class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 1) return true;
        if ((n%3 != 0) || (n <= 0)) return false;
        else{
            
            int x = n;
            int y = (n/x + n%x);
            
            while (x > 0){
                y = (x/3 + n%x);
                if (((y%3) != 0) && (y != 1)) return false;
                x /= 3;
            }
            
        }
        
        return true;
    }
};