#include<bits/stdc++.h>
using namespace std;

int longestValidParentheses(string s) {
        int count=0,total=0;
        stack<int> st;
        st.push(-1);
        for(int i=0;i<s.length();i++){
             if(s[i]=='('){
                 st.push(i);
             }else{
                 st.pop();
                 if(!st.empty()){
                    count=i-st.top();
                 }else{
                     st.push(i);
                 }
             }

            if(total<count){
                total=count;
            }
        }

        return total;

    }

int main(){
 string s="(()))())(";

  cout<<longestValidParentheses(s)<<endl;

return 0;
}
