#include <bits/stdc++.h>
using namespace std;

int solution(string skill, vector<string> skill_trees)
{
    int answer = 0;
    for(string skill_tree : skill_trees)
    {
        //idx : 현재 스킬트리 상에서 사용 가능한 스킬, chk : 스킬트리 순서를 체크
        int idx = 0;
        bool chk = true;
        
        for(char skill_seq : skill_tree)
        {
            //현재 스킬트리 상에서 사용 가능한 스킬외의 스킬을 사용할 경우
            for(int i = 0;i < skill.size();i++)
            {
                if(skill_seq == skill[i] && i != idx)
                {
                    chk = false;
                    break;
                }
            }
            
            //현재 스킬트리 상에서 사용 가능한 스킬을 사용할 경우
            if(skill_seq == skill[idx]) idx++;
            
            //스킬트리 만족 여부가 결정난 경우
            if(idx == skill.size() || chk == false) break;
        }
        
        //체크 결과 true면 갯수 증가
        if(chk) answer++;
    }
    return answer;
}
