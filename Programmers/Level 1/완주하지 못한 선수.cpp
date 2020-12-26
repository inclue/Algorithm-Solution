#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    //정렬하기
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    //참가자 명단과 완주자 명단 비교
    for(int i = 0;i < participant.size();i++)
    {
        if(participant[i] != completion[i]) return participant[i];
    }
}
