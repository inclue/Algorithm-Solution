#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves)
{
    vector<int> st;
    int res = 0;
    
    for(int i = 0;i < moves.size();i++)
    {
        int idx = moves[i] - 1; //크레인 작동 위치
        for(int j = 0;j < board.size();j++)
        {
            if(board[j][idx]) //작동 위치에서 가장 위에 있는 인형
            {
                st.push_back(board[j][idx]); //인형 집기
                board[j][idx] = 0;
                break;
            }
        }
        
        if(st.size() >= 2 && st[st.size()-1] == st[st.size()-2]) //같은 인형 2개 존재시 없애기
        {
            st.pop_back(), st.pop_back();
            res += 2;
        }
    }
    
    return res;
}
