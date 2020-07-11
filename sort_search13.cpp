#include<bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
using namespace std;

const long long nax=200005;

int  main()
{

	long long n, x, y;
	cin >> n;
	vector<pair<int, pii>> v;
	for (long long i = 1; i <= n; i++)
	{
		cin >> x >> y;
		v.push_back({x, {-1, i}}); // comes in
		v.push_back({y, {1, i}});  // goes out
	}
	sort(v.begin(), v.end());

	vector<int> rooms;
	long long occupied = 0, max_rooms = 0, in_or_out, ind;
	long long ans[nax];
	for (auto ele : v)
	{
		in_or_out = ele.second.first;
		ind = ele.second.second;

		if (in_or_out == 1)
		{
	
			rooms.push_back(ans[ind]);
		}
		else if (occupied == rooms.size())
		{
			ans[ind] = ++max_rooms;
		}
		else
		{
			ans[ind] = rooms[occupied++];
		}
	}
	cout << max_rooms << endl;
	for (long long i = 1; i <= n; i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}


