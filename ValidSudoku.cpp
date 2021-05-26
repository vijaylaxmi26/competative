 #include<bits/stdc++.h>
using namespace std;

    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_set<string>  st;

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                int box=(i/3)*3+(j/3);
                string s="Row";
                s+=(char)(i+48);
                s+=board[i][j];
                auto result = st.insert(s);
                if(result.second==0){
                    cout<<s<<endl;
                    return false;
                }
                s="Col";
                s+=(char)(j+48);
                s+=board[i][j];
                result = st.insert(s);
                if(result.second==0){
                    cout<<s<<endl;
                    return false;
                }
                s="Box";
                s+=(char)(box+48);
                s+=board[i][j];
                result = st.insert(s);
                if(result.second==0){
                    cout<<s<<endl;
                    return false;
                }

            }
        }

        return true;

    }

int main(){


return 0;
}
