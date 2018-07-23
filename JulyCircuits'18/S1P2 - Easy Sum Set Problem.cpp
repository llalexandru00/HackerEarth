#include <iostream>
#include <vector>

using namespace std;

int n, m, a[105], c[105], x, f[205], ok;
vector <int> b;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	cin >> m;
	for (int i = 1; i <= m; i++)
	{
		cin >> x;
		f[x] = 1;
	}
	for (int i = 1; i <= 100; i++)
	{
		ok = 1;
		for (int j = 1; j <= n; j++)
			ok = (ok && f[a[j] + i]);
		if (ok)
			b.push_back(i);
	}
	for (auto i : b)
		cout << i << " ";
	return 0;
}