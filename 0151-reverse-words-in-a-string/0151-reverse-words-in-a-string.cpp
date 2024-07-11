class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word;
        for(auto ch:s){
            if(ch ==' ' && word.length()){
                st.push(word);
                word = "";
                
            }
            else if (ch!=' '){
                word+=ch;
            }
        }
        string ans = "";
        if(word.length()){
            ans+=word;
        }else{
            ans+=st.top();
            st.pop();
        }
        while(!st.empty()){
            ans+=' '+st.top();
            st.pop();
        }
        
        return ans;
    }
};