#include <bits/stdc++.h>
using namespace std;

int supo1[5] = {1, 2, 3, 4, 5};
int supo2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
int supo3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

vector<int> solution(vector<int> answers) {
    //수포자별 맞은 문제 갯수 Count
    vector<int> cnt(3, 0);
    for(int i = 0;i < answers.size();i++)
    {
        if(answers[i] == supo1[i%5]) cnt[0]++;
        if(answers[i] == supo2[i%8]) cnt[1]++;
        if(answers[i] == supo3[i%10]) cnt[2]++;
    }
    
    //가장 높은 점수를 받은 수포자 찾기
    int max_problem = 0;
    vector<int> answer;
    for(int i=0;i<3;i++)
    {
        if(max_problem == cnt[i]) answer.push_back(i + 1);
        else if(max_problem < cnt[i])
        {
            max_problem = cnt[i];
            answer = {i + 1};
        }
    }
    return answer;
}
