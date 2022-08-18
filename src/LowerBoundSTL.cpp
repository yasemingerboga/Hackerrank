#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n, queryNo;
	cin >> n;
	int* numbers = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> numbers[i];
	}
	vector<int> v(numbers, numbers + n);           
	sort(v.begin(), v.end());                
	vector<int>::iterator low, up;
	cin >> queryNo;
	int* y = new int[queryNo];
	for (int i = 0; i < queryNo; i++)
	{
		cin >> y[i];
	}
	for (int i = 0; i < queryNo; i++)
	{
		low = lower_bound(v.begin(), v.end(), y[i]);
		int degisken = low - v.begin();
		if (v[degisken] == y[i]) {
			cout << "Yes " << low - v.begin() + 1 << endl;
		}
		else {
			cout << "No " << low - v.begin() + 1 << endl;
		}
	}
	return 0;
}
