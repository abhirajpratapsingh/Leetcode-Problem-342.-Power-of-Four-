// without Using recursion
class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        int ans=1;
        for(int i=0;i<=15;i++)
        {
            if(n==ans)
                return true;
            if(ans<INT_MAX/4)
                ans=ans*4;
        }
        return false;
    }
};



// using recursion
class Solution {
public:
    //Using recursion
    bool isPowerOfFour(int n) {
        return checkPowerOfFour(n, 1);
    }
    bool checkPowerOfFour(int n, int ans) {
        if (n == ans) {
            return true;
        }
        if (ans < INT_MAX / 4) {
            return checkPowerOfFour(n, ans * 4);
        }
        return false;
    }
};
