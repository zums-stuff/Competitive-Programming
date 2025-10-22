class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0;
        int ya = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(ya == 1){
                if(s[i] != ' '){
                    res++;
                }
                else return res;
            }
            else{
                if(s[i] != ' '){
                    ya = 1;
                    res++;
                }
            }
        }

        return res;
    }
};