class Solution {
public:
    int reverse(int x) {
        int a ;
        if(x<0){
            if (x == INT_MIN) {
                return 0;
            }
            a = x*(-1);
        }
        else{
            a = x ;
        }
        int num = 0 ;
        while(a){
            int rem = a%10 ; 
            a = a/10 ; 

            if (num > INT_MAX / 10) {
                return 0; 
            }
            
            num = (num*10) + rem ; 
        }
        if(x>=0){
            return num ; 
        }
        return(num*(-1)) ;
    }
};