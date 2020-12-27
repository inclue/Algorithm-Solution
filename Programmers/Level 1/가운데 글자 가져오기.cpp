#include <bits/stdc++.h>
using namespace std;

string solution(string s)
{
    return s.substr((s.size() - 1) / 2, (s.size() % 2 ? 1 : 2));
}
