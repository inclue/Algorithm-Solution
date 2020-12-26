#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves)
{
    vector<int> st;
    int res = 0;
    
    for(int i = 0;i < moves.size();i++)
    {
        int idx = moves[i] - 1;
        for(int j = 0;j < board.size();j++)
        {
            if(board[j][idx])
            {
                st.push_back(board[j][idx]);
                board[j][idx] = 0;
                break;
            }
        }
        
        if(st.size() >= 2 && st[st.size()-1] == st[st.size()-2])
        {
            st.pop_back(), st.pop_back();
            res += 2;
        }
    }
    
    return res;
}
