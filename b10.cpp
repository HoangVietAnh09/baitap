#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float sum = 0;
	for(int i = 0; i <= n; i++)
	{
		sum += 1.0/(2*i+1);
	}
	cout << sum;
	return 0;
}
