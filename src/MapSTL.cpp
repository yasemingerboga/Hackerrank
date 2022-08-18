#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int q;
	map <string, int>m;
	cin >> q;
	int* types = new int[q];
	string* names = new string[q];
	int* notes = new int[q];
	for (int i = 0; i < q; i++)
	{
		cin >> types[i];
		if (types[i] == 1) {
			cin >> names[i];
			cin >> notes[i];
		}
		else {
			cin >> names[i];
		}
	}
	for (int i = 0; i < q; i++)
	{
		if (types[i] == 1) {
			map<string, int>::iterator itr = m.find(names[i]);
			if (itr != m.end()) {
				itr->second = notes[i] + itr->second;
			}
			else {
				m.insert(make_pair(names[i], notes[i]));
			}
		}
		else if (types[i] == 2) {
			m.erase(names[i]);
		}
		else if (types[i] == 3) {
			map<string, int>::iterator itr = m.find(names[i]);
			if (itr == m.end()) {
				cout << 0 << endl;
			}
			else {
				cout << itr->second << endl;
			}
		}
	}
	return 0;
}



