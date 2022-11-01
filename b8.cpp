#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float sum = 0;
	for(int i = 1; i <= n; i++)
	{
		sum += 1.0/pow(i, 2);
	}
	cout << sum;
	return 0;
}
