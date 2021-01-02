#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n, int m)
{
    vector<int> answer;
    
    //최대공약수
    answer.push_back(gcd(n, m));
    
    //최소공배수
    answer.push_back((long long)n * m / gcd(n, m));
    
    return answer;
}
