#include <bits/stdc++.h>
using namespace std;
int S2(int n)
{
	int sum = 0;
	for(int i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}
int main()
{
	int n;
	cin >> n;
	cout << S2(n);
	
	return 0;
}
