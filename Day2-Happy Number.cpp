/*
the property of set in c++ is that it cannot contain duplicates
*/

class Solution {
public:
    int squareSum(int n)
    { int sum=0,rem;
        while(n)
        {
            rem=n%10;
            sum+=(rem*rem);
            n/=10;
        }
     return sum;
    }
    bool isHappy(int n) {
       if(n==1)
           return true;
        set<int>s;
        while(1)
        {
           n=squareSum(n);
            if(n==1)
                return true; 
            if(s.find(n)!=s.end())
                return false;
            s.insert(n);
        }
    }
};
