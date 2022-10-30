#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define NMAX 100000
struct Crossing 
{
	int x1, x2;
	int x2index;
};
Crossing crossings[NMAX];
inline bool cmp1(Crossing a, Crossing b) 
{
	return a.x1 < b.x1;
}
inline bool cmp2(Crossing a, Crossing b) 
{
	return a.x2 < b.x2;
}
int main() 
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
	{
		scanf("%d", &crossings[i].x1);
		scanf("%d", &crossings[i].x2);
	}
	sort(crossings, crossings + n, cmp2);
	for (int i = 0; i < n; i++) 
	{
		crossings[i].x2index = i;
	}
	sort(crossings, crossings + n, cmp1);
	int answer = 0;
	int maxX2indexSeen = -1;
	for (int i = 0; i < n; i++) 
	{
		if (crossings[i].x2index == i && maxX2indexSeen == i-1) 
		{
			answer++;
		}
		maxX2indexSeen = max(maxX2indexSeen, crossings[i].x2index);
	}
	printf("%d", answer);
}
