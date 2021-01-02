#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> key = {{3, 1}, {0, 0}, {0, 1}, {0, 2}, {1, 0}, {1, 1}, {1, 2}, {2, 0}, {2, 1}, {2, 2}};

string solution(vector<int> numbers, string hand)
{
    string answer = "";
    pair<int, int> left = {3, 0}, right = {3, 2};
    for(int num : numbers)
    {
        //왼쪽 열 입력
        if(key[num].second == 0) answer.push_back('L'), left = key[num];
        //오른쪽 열 입력
        else if(key[num].second == 2) answer.push_back('R'), right = key[num];
        else //가운데 열 입력
        {
            //왼쪽, 오른쪽 거리 구하기
            int left_dir = abs(left.first - key[num].first) + abs(left.second - key[num].second);
            int right_dir = abs(right.first - key[num].first) + abs(right.second - key[num].second);
            
            //왼쪽의 거리가 더 짧은 경우
            if(left_dir < right_dir) answer.push_back('L'), left = key[num];
            //오른쪽의 거리가 더 짧은 경우 || 두 엄지손가락의 거리가 같으면서, 오른손잡이인 경우
            else if(left_dir > right_dir || hand == "right") answer.push_back('R'), right = key[num];
            //두 엄지손가락의 거리가 같으면서, 왼손잡이인 경우
            else answer.push_back('L'), left = key[num];
        }
    }
    return answer;
}
