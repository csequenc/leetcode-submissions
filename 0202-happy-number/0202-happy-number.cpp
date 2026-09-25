class Solution {
public:
    int fun(int n){

        int sum=0;
        while(n>0){
            int r = n%10;
            sum += r*r;
            n/=10;
        }

        return sum;

    }
    
    bool isHappy(int n) {

        if(fun(n) == 1) return true;
        int slow = n;
        int fast = n;

        while(fast != 1){

            slow = fun(slow);
            fast = fun(fun(fast));

            if(slow == fast) return false;
        }

        return true;


        
    }
};