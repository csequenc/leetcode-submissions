// Last updated: 8/16/2026, 1:54:54 PM
class Solution {
public:
    int clumsy(int n) {
        
        int fact = 0;
        int i = n;
        for(i=n;i>0;i=i-4){
            
            if(fact == 0){
                fact = i * max((i-1),1) / max((i-2),1) + max((i-3),0);
            }

            else{
            fact +=  -i * max((i-1),1) / max((i-2),1) + max((i-3),0);
            }
        }

        return fact;

    }
};