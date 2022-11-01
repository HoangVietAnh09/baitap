#include <bits/stdc++.h>
using namespace std;
long long sum(int n)
{
	long long sum = 0;
	for(int i = 1; i <= n; i++)
	{
		sum += pow(i, 3);
	}
	return sum;
}
int main()
{
	int n;
	cin >> n;
	cout << sum(n);
	
	return 0;
}
