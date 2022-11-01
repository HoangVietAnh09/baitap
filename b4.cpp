#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long tich = 1;
	for(int i = 1; i <= n; i++)
	{
		tich *= (2*i+1);
	}
	cout << tich;
	return 0;
}
