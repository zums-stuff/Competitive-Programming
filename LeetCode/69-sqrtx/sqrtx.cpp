class Solution {
public:
    int mySqrt(int x) {
        long int c;
        for( long int i = 0; i<x; i++){
            if ((i*i)>x){
                c = i-1;
                break;
            }
        }
        return c;
    }
};