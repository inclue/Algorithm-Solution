#include <cstdio>
#include <vector>
#include <algorithm>

int n, m;
std::vector<long long> tree;

bool solve(int t) {
	long long r = 0;
	for (int i = n-1; i >= 0; i--) {
		if (tree[i] > t) r += (tree[i] - t);
	}
	return (r >= m);
}

long long range(long long s, long long e)
{
    long long mid = (s+e)/2L;
    if(s>e) return e;
    
    if(solve(mid)) return range(mid+1, e);
    else return range(s, mid-1);
}

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		tree.push_back(t);
	}
	
	printf("%lld", range(0,1000000000L));
	return 0;
}
