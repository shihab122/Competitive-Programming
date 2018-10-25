#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

struct pp
{
	int a, b;
};
bool operator<(pp x, pp y)
{
	return x.a > y.a;
}

int parent[500000];
int size[500000];
bool fr[500000];

int find_set(int v) {
	if (v == parent[v])
		return v;
	return parent[v] = find_set(parent[v]);
}

void make_set(int v) {
	parent[v] = v;
	size[v] = 1;
}

void union_sets(int a, int b) {
	a = find_set(a);
	b = find_set(b);
	if (a != b) {
		if (size[a] < size[b])
			swap(a, b);
		parent[b] = a;
		size[a] += size[b];
	}
}

int cur = 1;
int all = 0;
pp in[500000];
int n;

int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		scanf("%d", &in[i].a);
		in[i].b = i;
	}
	sort(in + 1, in + n + 1);
	for (int i = 1; i <= n; ++i)
	{
		fr[in[i].b] = true;
		make_set(in[i].b);
		if (fr[in[i].b - 1])
			union_sets(in[i].b, in[i].b - 1);
		if (fr[in[i].b + 1])
			union_sets(in[i].b, in[i].b + 1);
		all = max(all, size[find_set(in[i].b)]);
		while (cur <= all)
		{
			cur++;
			printf("%d ", in[i].a);
		}
		cout<<"all "<<all<<endl;
	}
	return 0;
}
