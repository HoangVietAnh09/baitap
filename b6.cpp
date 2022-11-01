#include <bits/stdc++.h>
using namespace std;
long long gt(int n)
{
	long long gthua = 1;
	for(int i = 1; i <= n; i++)
	{
		gthua *= i;
	}
	return gthua;
}
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	for(int i = 1; i <= n; i++)
	{
		sum += gt(i);
	}
	cout << sum;
	
	return 0;
}
