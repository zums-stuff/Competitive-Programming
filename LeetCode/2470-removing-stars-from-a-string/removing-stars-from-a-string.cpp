class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string total = "";

        for(int i=0; i<s.size(); i++){
            if(s[i] != '*'){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }

        while(!st.empty()){
            total += st.top();
            st.pop();
        }
        reverse(total.begin(), total.end());

        return total;
    }
};