#include <bits/stdc++.h>
using namespace std;

bool solution(string s)
{
    int pcnt = 0, ycnt = 0;
    for(char x:s)
    {
        if(x == 'p' || x == 'P') pcnt++; //P 갯수 세기
        if(x == 'y' || x == 'Y') ycnt++; //Y 갯수 세기
    }
    return pcnt == ycnt; //P의 갯수, Y의 갯수 비교
}
