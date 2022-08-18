#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int q;
	cin >> q;
	set<int>s;
	int* y=new int[q];
	int* x = new int[q];
	for (int i = 0; i < q; i++)
	{
		cin >> y[i];
		cin >> x[i];
	}
	for (int i = 0; i < q; i++)
	{
		if (y[i] == 1) {
			s.insert(x[i]);
		}
		else if (y[i] == 2) {
			s.erase(x[i]);
		}
		else if (y[i] == 3) {
			set<int>::iterator itr = s.find(x[i]);
			if (itr == s.end()) {
				cout << "No" << endl;
			}
			else
				cout << "Yes" << endl;
		}
	}
	return 0;
}
