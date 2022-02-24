#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>vect;
	vector<pair<int, int>>v;
	int max = INT_MIN;
	int answer;
	for (auto x : vect)
	{
		int count = 0;
		vector<int>hello;
		answer = x;
		if (x < 0)
		{
			x *= -1;
		}
		while (1)
		{
			hello.insert(hello.begin(), x % 10);
			x /= 10;
			if (x == 0)
			{
				break;
			}
		}
		for (auto y : hello)
		{
			if (y == 5)
			{
				count++;
			}
		}
		v.push_back(make_pair(answer, count));
	}
	for (auto y : v)
	{
		if (y.second > max)
		{
			max = y.second;
		}
	}
	if (max > 0)
	{
		for (auto x : v)
		{
			if (max == x.second)
			{
				cout << "answer is " << x.first << endl;
				break;
			}
		}
	}
	else if (vect.size() == 0)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << v[0].first << endl;
	}
}