#include <bits/stdc++.h>
using namespace std;
long long gt(int n)
{
	long long gt = 1;
	for(int i = 1; i <= n; i++)
	{
		gt *= i;
	}
	return gt;
}
int main()
{
	int s1;
	cin >> s1;
	cout << gt(s1);
	
	return 0;
}
