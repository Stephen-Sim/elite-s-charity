#include <iostream>
#include <vector>
using namespace std;

const int SIZE = 100000000;

vector<int> swap_value(vector<int> v, int value, int swap_value)
{
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == value)
		{
			v[i] = swap_value;

			break;
		}
	}

	return v;
}

int find_largest(vector<int> v)
{
	int largest = v[0];

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > largest)
		{
			largest = v[i];
		}
	}

	return largest;
}

int find_smallest(vector<int> v)
{
	int smallest = v[0];

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] < smallest)
		{
			smallest = v[i];
		}
	}

	return smallest;
}

int sum(vector<int> v)
{
	int total = 0;

	for (int value : v)
	{
		total += value;
	}

	return total;
}


void solve()
{
	int n, k;
	cin >> n >> k;

	int arr[SIZE];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	vector<int> v_motu, v_tomu;

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			v_motu.push_back(arr[i]);
		}
		else
		{
			v_tomu.push_back(arr[i]);
		}
	}

	int motu_biggest = find_largest(v_motu), tomu_smallest = find_smallest(v_tomu);

	while (k--)
	{
		if (motu_biggest > tomu_smallest)
		{
			v_tomu = swap_value(v_tomu, tomu_smallest, motu_biggest);
			v_motu = swap_value(v_motu, motu_biggest, tomu_smallest);

			motu_biggest = find_largest(v_motu);
			tomu_smallest = find_smallest(v_tomu);
		}
		else
			break;
	}

	cout << (sum(v_tomu) > sum(v_motu) ? "YES" : "NO") << endl;
}

int main()
{
	int c = 1;
	cin >> c;

	while (c--)
	{
		solve();
	}

	return 0;
}