#include<iostreeam>
#include<algorithm>
using namespace std;

const int N = 1e6;
int n, m;
int f[N], g[N];

int main()
{

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> g[i];
	}
	for (int i = 1; i <= m; i++)
	{
		cin >> f[i];
	}

	for (int i = 1; i < m; i++)
	{
		int key = f[i];
		int l = -1, r = n + 1;
		while (l + 1 != r)
		{
			int mid = (l + r) / 2;
			if (mid < key)
			{
				l = mid;
			}
			else
			{
				r = mid;
			}
		}
		if (r < n + 1 && r > -1)
		{
			cout << r << " ";
		}
		else
		{
			cout << -1 << " ";
		}
	}
	return 0;
}